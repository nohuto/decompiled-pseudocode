/*
 * XREFs of MiFreeRelocations @ 0x14052D194
 * Callers:
 *     MiDeleteControlArea @ 0x1400A34C8 (MiDeleteControlArea.c)
 *     MiRelocateImage @ 0x140507390 (MiRelocateImage.c)
 * Callees:
 *     MiDeleteDirectMapFixupPfn @ 0x1401F4728 (MiDeleteDirectMapFixupPfn.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     MiReturnImageBase @ 0x14042DC84 (MiReturnImageBase.c)
 */

void __fastcall MiFreeRelocations(_DWORD *a1, _QWORD *a2)
{
  unsigned int v3; // edx
  bool v5; // zf
  void *v6; // rcx
  _QWORD *v7; // rcx
  _QWORD *v8; // rbx
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  unsigned int v11[3]; // [rsp+20h] [rbp-18h] BYREF
  char v12; // [rsp+2Ch] [rbp-Ch]
  bool v13; // [rsp+2Dh] [rbp-Bh]

  if ( a2 )
  {
    v3 = a1[23];
    v11[0] = a1[22];
    v11[1] = (unsigned __int16)v3;
    v5 = (a1[14] & 0x10000000) == 0;
    v11[2] = (v3 >> 29) & 3;
    if ( v5 )
    {
      v12 = 0;
    }
    else
    {
      v12 = 1;
      v13 = (v3 & 0x2000000) != 0;
    }
    if ( a2[5] )
    {
      MiReturnImageBase(v11);
      a1[22] = -1;
    }
    v6 = (void *)a2[9];
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
    v7 = (_QWORD *)a2[2];
    if ( v7 )
    {
      do
      {
        v9 = (_QWORD *)*v7;
        ExFreePoolWithTag(v7, 0);
        v7 = v9;
      }
      while ( v9 );
    }
    v8 = (_QWORD *)a2[10];
    while ( v8 )
    {
      v10 = (__int64)v8;
      v8 = (_QWORD *)*v8;
      MiDeleteDirectMapFixupPfn(v10);
    }
    ExFreePoolWithTag(a2, 0);
  }
}
