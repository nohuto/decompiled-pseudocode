/*
 * XREFs of WMI_QueryInstanceDeviceNodeInfo @ 0x1C0030FC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0035000 (memmove.c)
 *     memset @ 0x1C0035340 (memset.c)
 *     WMI_GetPropertyString @ 0x1C006FEAC (WMI_GetPropertyString.c)
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
  _QWORD *v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // r9
  _DWORD *v19; // rdx
  __int64 v20; // r11
  __int64 *v21; // r10
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned __int8 v24; // cl
  __int16 v25; // ax
  size_t v26; // rbp
  const void *v27; // rdx
  unsigned int v28; // eax
  size_t v29; // r8
  const void *v30; // rdx
  unsigned int v31; // eax
  KIRQL v33; // [rsp+58h] [rbp+10h]

  v4 = a2;
  v5 = 0;
  *a4 = 1202;
  if ( a2 < 0x4B2 )
    return (unsigned int)-1073741789;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3008))(WdfDriverGlobals, a1);
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          v9,
          off_1C0057118);
  v11 = *(_QWORD *)(v10 + 24);
  if ( !v11 )
  {
    *a4 = 0;
    return (unsigned int)-1073741667;
  }
  memset(a3, 0, v4);
  v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v11 + 40));
  v33 = v12;
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
      v16 = (_QWORD *)(*(_QWORD *)(v11 + 48) + 16LL);
      v17 = *v16 - 8LL;
      v18 = (_QWORD *)*v16;
      if ( v16 != (_QWORD *)*v16 )
      {
        do
        {
          if ( (_DWORD)v14 != *(_DWORD *)(v17 + 24) )
            break;
          if ( (_DWORD)v14 )
          {
            v19 = (_DWORD *)((char *)a3 + 1198);
            v20 = v14;
            v21 = (__int64 *)(v17 + 72);
            do
            {
              v22 = *v21;
              v21 += 8;
              *(_DWORD *)((char *)v19 - 7) = *(_DWORD *)v22;
              *(_WORD *)((char *)v19 - 3) = *(_WORD *)(v22 + 4);
              *((_BYTE *)v19 - 1) = *(_BYTE *)(v22 + 6);
              *v19 = 0;
              v19 = (_DWORD *)((char *)v19 + 11);
              --v20;
            }
            while ( v20 );
          }
          v17 = *v18 - 8LL;
          v18 = (_QWORD *)*v18;
        }
        while ( (_QWORD *)(*(_QWORD *)(v11 + 48) + 16LL) != v18 );
        v12 = v33;
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
  v23 = *(_QWORD *)(v10 + 16);
  *(_OWORD *)(a3 + 23) = *(_OWORD *)(v23 + 280);
  *(_OWORD *)(a3 + 27) = *(_OWORD *)(v23 + 296);
  v24 = *(_BYTE *)(*(_QWORD *)(v10 + 16) + 216LL);
  v25 = *(_WORD *)(v10 + 48);
  if ( v24 )
    *((_WORD *)a3 + v24 + 54) = v25;
  else
    *((_WORD *)a3 + 54) = v25;
  WMI_GetPropertyString(a1, 0LL, a3 + 2, 80LL);
  v26 = 256LL;
  WMI_GetPropertyString(a1, 1LL, (char *)a3 + 163, 256LL);
  WMI_GetPropertyString(a1, 2LL, (char *)a3 + 419, 256LL);
  v27 = *(const void **)(v11 + 2136);
  if ( v27 )
  {
    v28 = *(_DWORD *)(v11 + 2132);
    v29 = 256LL;
    if ( v28 <= 0x100 )
      v29 = v28;
    memmove((char *)a3 + 675, v27, v29);
  }
  v30 = *(const void **)(v11 + 2152);
  if ( v30 )
  {
    v31 = *(_DWORD *)(v11 + 2148);
    if ( v31 <= 0x100 )
      v26 = v31;
    memmove((char *)a3 + 931, v30, v26);
  }
  return v5;
}
