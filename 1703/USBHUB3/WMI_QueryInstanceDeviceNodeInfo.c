/*
 * XREFs of WMI_QueryInstanceDeviceNodeInfo @ 0x1C0034070
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0038200 (memmove.c)
 *     memset @ 0x1C0038540 (memset.c)
 *     WMI_GetPropertyString @ 0x1C0074730 (WMI_GetPropertyString.c)
 */

__int64 __fastcall WMI_QueryInstanceDeviceNodeInfo(__int64 a1, unsigned int a2, _DWORD *a3, unsigned int *a4)
{
  size_t v4; // rbp
  unsigned int v5; // ebx
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // rsi
  KIRQL v12; // r10
  __int64 v13; // r9
  __int64 v14; // r8
  unsigned int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // rdx
  _DWORD *v18; // r9
  __int64 v19; // r11
  __int64 *v20; // r10
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned __int8 v23; // cl
  size_t v24; // rbp
  const void *v25; // rdx
  unsigned int v26; // eax
  size_t v27; // r8
  const void *v28; // rdx
  unsigned int v29; // eax
  KIRQL v31; // [rsp+58h] [rbp+10h]

  v4 = a2;
  v5 = 0;
  *a4 = 1202;
  if ( a2 < 0x4B2 )
    return (unsigned int)-1073741789;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3008))(WdfDriverGlobals, a1);
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          v9,
          off_1C005B070);
  v11 = *(_QWORD *)(v10 + 24);
  if ( !v11 )
  {
    *a4 = 0;
    return (unsigned int)-1073741667;
  }
  memset(a3, 0, v4);
  v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v11 + 40));
  v31 = v12;
  if ( (*(_DWORD *)(v11 + 1620) & 0x10) != 0 )
  {
    v13 = *(_QWORD *)(v11 + 48);
    if ( v13 )
    {
      v14 = *(unsigned int *)(v13 + 8);
      v15 = 11 * v14 + 1191;
      *a4 = v15;
      if ( v15 > (unsigned int)v4 )
      {
        KeReleaseSpinLock((PKSPIN_LOCK)(v11 + 40), v12);
        return (unsigned int)-1073741789;
      }
      *((_BYTE *)a3 + 148) = *(_BYTE *)(v13 + 37);
      *(_DWORD *)((char *)a3 + 1187) = v14;
      v16 = *(_QWORD *)(v11 + 48);
      v17 = *(_QWORD *)(v16 + 16) - 8LL;
      if ( v16 != *(_QWORD *)(v16 + 16) - 16LL )
      {
        do
        {
          if ( (_DWORD)v14 != *(_DWORD *)(v17 + 24) )
            break;
          if ( (_DWORD)v14 )
          {
            v18 = (_DWORD *)((char *)a3 + 1198);
            v19 = v14;
            v20 = (__int64 *)(v17 + 72);
            do
            {
              v21 = *v20;
              v20 += 8;
              *(_DWORD *)((char *)v18 - 7) = *(_DWORD *)v21;
              *(_WORD *)((char *)v18 - 3) = *(_WORD *)(v21 + 4);
              *((_BYTE *)v18 - 1) = *(_BYTE *)(v21 + 6);
              *v18 = 0;
              v18 = (_DWORD *)((char *)v18 + 11);
              --v19;
            }
            while ( v19 );
          }
          v17 = *(_QWORD *)(v17 + 8) - 8LL;
        }
        while ( *(_QWORD *)(v11 + 48) != v17 - 8 );
        v12 = v31;
      }
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v11 + 40), v12);
  *(_OWORD *)((char *)a3 + 130) = *(_OWORD *)(v11 + 1972);
  *((_WORD *)a3 + 73) = *(_WORD *)(v11 + 1988);
  *(_DWORD *)((char *)a3 + 149) = *(_DWORD *)(v11 + 156);
  *((_WORD *)a3 + 64) = *(_WORD *)(v10 + 48);
  *(_DWORD *)((char *)a3 + 155) = *(unsigned __int16 *)(v10 + 48);
  *(_DWORD *)((char *)a3 + 159) = *(_DWORD *)(*(_QWORD *)(v11 + 8) + 1424LL);
  *a3 = 1431519822;
  a3[1] = *a4;
  a3[22] = 0;
  v22 = *(_QWORD *)(v10 + 16);
  *(_OWORD *)(a3 + 23) = *(_OWORD *)(v22 + 296);
  *(_OWORD *)(a3 + 27) = *(_OWORD *)(v22 + 312);
  v23 = *(_BYTE *)(*(_QWORD *)(v10 + 16) + 232LL);
  if ( v23 )
    *((_WORD *)a3 + v23 + 54) = *(_WORD *)(v10 + 48);
  else
    *((_WORD *)a3 + 54) = *(_WORD *)(v10 + 48);
  WMI_GetPropertyString(a1, 0LL, a3 + 2, 80LL);
  v24 = 256LL;
  WMI_GetPropertyString(a1, 1LL, (char *)a3 + 163, 256LL);
  WMI_GetPropertyString(a1, 2LL, (char *)a3 + 419, 256LL);
  v25 = *(const void **)(v11 + 2136);
  if ( v25 )
  {
    v26 = *(_DWORD *)(v11 + 2132);
    v27 = 256LL;
    if ( v26 <= 0x100 )
      v27 = v26;
    memmove((char *)a3 + 675, v25, v27);
  }
  v28 = *(const void **)(v11 + 2152);
  if ( v28 )
  {
    v29 = *(_DWORD *)(v11 + 2148);
    if ( v29 <= 0x100 )
      v24 = v29;
    memmove((char *)a3 + 931, v28, v24);
  }
  return v5;
}
