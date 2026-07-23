/*
 * XREFs of MxConsumeLargePageSlush @ 0x1407D0D5C
 * Callers:
 *     MiInitNucleus @ 0x1407D06B4 (MiInitNucleus.c)
 * Callees:
 *     MiVaToPfn @ 0x140081B60 (MiVaToPfn.c)
 *     MiAddExpansionNonPagedPool @ 0x1401436D4 (MiAddExpansionNonPagedPool.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void MxConsumeLargePageSlush()
{
  __int64 v0; // rdi
  unsigned int v1; // ebx
  __int64 v2; // rax
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  __int64 *v10; // rdi
  unsigned __int64 v11; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v12[5]; // [rsp+28h] [rbp-40h]

  if ( (MiFlags & 4) != 0 )
  {
    if ( !dword_1403A9140 )
      dword_1403A9140 = 0x80000;
    v0 = MxHalDataTableEntry;
    v1 = 0;
    if ( *(_QWORD *)(qword_140760510 + 48) >= *(_QWORD *)(MxHalDataTableEntry + 48) )
    {
      v2 = MxHalDataTableEntry;
      v0 = qword_140760510;
    }
    else
    {
      v2 = qword_140760510;
    }
    v3 = *(_QWORD *)(v2 + 48);
    v4 = *(_QWORD *)(v0 + 48);
    v5 = v3 + *(unsigned int *)(v2 + 64);
    if ( v5 != v4 )
    {
      v11 = MiVaToPfn(v5);
      v1 = 1;
      v12[0] = MiVaToPfn(v4) - v11;
    }
    v6 = MiVaToPfn(v3);
    if ( (v6 & 0x1FF) != 0 )
    {
      v7 = 2LL * v1++;
      v12[v7 - 1] = v6 & 0xFFFFFFFFFFFFFE00uLL;
      v12[v7] = v6 & 0x1FF;
    }
    v8 = MiVaToPfn(v4 + *(unsigned int *)(v0 + 64) - 1LL);
    if ( (v8 & 0x1FF) != 0x1FF )
    {
      v9 = 2LL * v1++;
      v12[v9 - 1] = v8 + 1;
      v12[v9] = 511 - (v8 & 0x1FF);
    }
    if ( v1 )
    {
      v10 = &v12[2 * v1 - 1];
      do
      {
        v10 -= 2;
        MiAddExpansionNonPagedPool(*v10, v10[1]);
        --v1;
      }
      while ( v1 );
    }
  }
}
