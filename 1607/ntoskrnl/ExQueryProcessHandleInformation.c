/*
 * XREFs of ExQueryProcessHandleInformation @ 0x14054BE88
 * Callers:
 *     NtQueryInformationProcess @ 0x140421450 (NtQueryInformationProcess.c)
 * Callees:
 *     ExLockHandleTableEntry @ 0x1400CF5D0 (ExLockHandleTableEntry.c)
 *     ExpGetNextHandleTableEntry @ 0x14045D570 (ExpGetNextHandleTableEntry.c)
 *     ExUnlockHandleTableEntry @ 0x14045DCA4 (ExUnlockHandleTableEntry.c)
 */

__int64 __fastcall ExQueryProcessHandleInformation(unsigned int *a1, _QWORD *a2, int a3, int *a4)
{
  __int64 v5; // r13
  _QWORD *v6; // rbx
  unsigned int v7; // r12d
  int v8; // esi
  unsigned int v9; // r14d
  __int64 v10; // rdx
  _QWORD *NextHandleTableEntry; // rax
  unsigned int v12; // r11d
  _QWORD *v13; // rdi
  __int64 *v14; // rdx
  __int64 v15; // rax
  int v16; // r12d
  int v19; // [rsp+20h] [rbp-68h]
  int v20; // [rsp+24h] [rbp-64h]
  __int64 v21; // [rsp+30h] [rbp-58h] BYREF
  __int64 v22; // [rsp+38h] [rbp-50h]
  __int64 v23; // [rsp+40h] [rbp-48h]
  unsigned __int64 v24; // [rsp+48h] [rbp-40h]
  unsigned int v26; // [rsp+A0h] [rbp+18h]

  v5 = (__int64)a1;
  v6 = a2 + 2;
  v7 = (a3 - 16) / 0x28u;
  v24 = (unsigned int)(a3 - 16) / 0x28uLL;
  v26 = 0;
  v8 = 16;
  v9 = 0;
  v10 = 0LL;
  while ( 1 )
  {
    NextHandleTableEntry = (_QWORD *)ExpGetNextHandleTableEntry(a1, v10, &v21);
    v13 = NextHandleTableEntry;
    if ( !NextHandleTableEntry )
      break;
    if ( v12 >= v7 )
    {
      if ( (v21 & 0x3FC) != 0 && *NextHandleTableEntry )
      {
        v8 += 40;
        v9 = -1073741820;
      }
    }
    else if ( ExLockHandleTableEntry(v5, NextHandleTableEntry) )
    {
      v14 = (__int64 *)(((__int64)*v13 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
      v15 = ((__int64)*v13 >> 17) & 7;
      v16 = *((_DWORD *)v13 + 2);
      if ( (v16 & 0x2000000) != 0 )
        LOBYTE(v15) = v15 | 8;
      v20 = v15 & 7;
      v19 = *(unsigned __int8 *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)((((__int64)*v13 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 0x18) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(WORD1(*v13) & 0xFFF0) >> 8)]
                               + 40);
      v23 = *v14;
      v22 = v14[1];
      ExUnlockHandleTableEntry(v5, v13);
      v8 += 40;
      ++v26;
      *v6 = v21;
      v6[1] = v22;
      v6[2] = v23;
      *((_DWORD *)v6 + 6) = v16 & 0x1FFFFFF;
      *((_DWORD *)v6 + 7) = v19;
      *((_DWORD *)v6 + 8) = v20;
      *((_DWORD *)v6 + 9) = 0;
      *a2 = v26;
      v6 += 5;
      v7 = v24;
    }
    v10 = (__int64)v13;
    a1 = (unsigned int *)v5;
  }
  if ( a4 )
    *a4 = v8;
  return v9;
}
