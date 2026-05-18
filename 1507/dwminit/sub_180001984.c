/*
 * XREFs of sub_180001984 @ 0x180001984
 * Callers:
 *     sub_180001A88 @ 0x180001A88 (sub_180001A88.c)
 * Callees:
 *     sub_1800018C0 @ 0x1800018C0 (sub_1800018C0.c)
 *     sub_180003A80 @ 0x180003A80 (sub_180003A80.c)
 *     sub_180003B24 @ 0x180003B24 (sub_180003B24.c)
 *     memset @ 0x180007606 (memset.c)
 */

__int64 __fastcall sub_180001984(__int128 *a1, _OWORD *a2, __int64 a3, int *a4)
{
  __int128 v8; // xmm0
  int v9; // edi
  int v10; // esi
  int v11; // eax
  PVOID v12; // rdx
  _BYTE v14[48]; // [rsp+30h] [rbp-58h] BYREF
  PVOID Buffer; // [rsp+90h] [rbp+8h] BYREF

  memset(&v14[2], 0, 0x2EuLL);
  v8 = *a1;
  Buffer = 0LL;
  v9 = 0;
  *(_OWORD *)v14 = v8;
  v10 = 1;
  if ( a2 )
    *(_OWORD *)&v14[16] = *a2;
  *(_QWORD *)&v14[32] = a3;
  v11 = LsaLookupManageSidNameMapping(0LL, v14, &Buffer);
  if ( v11 < 0 )
  {
    v9 = v11 | 0x10000000;
    if ( &unk_180008DF8 )
      sub_180003B24(4, (unsigned int)&unk_180008DF8, 2, v9, 439);
    else
      sub_180003A80((unsigned int)v9, 439LL);
  }
  v12 = Buffer;
  if ( Buffer )
  {
    v10 = *(_DWORD *)Buffer;
    if ( v9 < 0 && sub_1800018C0(v10) )
      v9 = 0;
    LsaLookupFreeMemory(v12);
  }
  *a4 = v10;
  return (unsigned int)v9;
}
