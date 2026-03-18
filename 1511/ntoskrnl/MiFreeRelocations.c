/*
 * XREFs of MiFreeRelocations @ 0x1404E9FCC
 * Callers:
 *     MiDeleteControlArea @ 0x14000BB08 (MiDeleteControlArea.c)
 *     MiRelocateImage @ 0x1403C5E30 (MiRelocateImage.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiReturnImageBase @ 0x14041B3BC (MiReturnImageBase.c)
 */

void __fastcall MiFreeRelocations(_DWORD *a1, _QWORD *a2)
{
  unsigned int v3; // edx
  bool v5; // zf
  void *v6; // rcx
  _QWORD *v7; // rcx
  _QWORD *v8; // rbx
  unsigned int v9[3]; // [rsp+20h] [rbp-18h] BYREF
  char v10; // [rsp+2Ch] [rbp-Ch]
  bool v11; // [rsp+2Dh] [rbp-Bh]

  if ( a2 )
  {
    v3 = a1[23];
    v9[0] = a1[22];
    v9[1] = (unsigned __int16)v3;
    v5 = (a1[14] & 0x10000000) == 0;
    v9[2] = (v3 >> 29) & 3;
    if ( v5 )
    {
      v10 = 0;
    }
    else
    {
      v10 = 1;
      v11 = (v3 & 0x2000000) != 0;
    }
    if ( a2[5] )
    {
      MiReturnImageBase(v9);
      a1[22] = -1;
    }
    v6 = (void *)a2[8];
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
    v7 = (_QWORD *)a2[2];
    if ( v7 )
    {
      do
      {
        v8 = (_QWORD *)*v7;
        ExFreePoolWithTag(v7, 0);
        v7 = v8;
      }
      while ( v8 );
    }
    ExFreePoolWithTag(a2, 0);
  }
}
