/*
 * XREFs of DrvDxgkUpgradeLegacyDpiSettings @ 0x1C00BBAA0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0008270 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000B590 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C000D220 (EngAcquireSemaphore.c)
 *     ?pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ @ 0x1C0034460 (-pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ.c)
 *     GreReleaseSemaphoreInternal @ 0x1C003AA20 (GreReleaseSemaphoreInternal.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

__int64 __fastcall DrvDxgkUpgradeLegacyDpiSettings(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rbx
  __int64 v6; // r8
  struct PDEV *v7; // rdi
  __int64 v8; // rsi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r9
  int v13; // esi
  const wchar_t *v14; // rax
  const wchar_t *v15; // rax
  int v16; // ecx
  int v17; // esi
  int v18; // eax
  unsigned int v19; // ebx
  struct _LUID *v20; // rax
  int v21; // eax
  _QWORD *v22; // rax
  struct PDEV *v23; // [rsp+30h] [rbp-D0h] BYREF
  __m128i v24[5]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v25; // [rsp+90h] [rbp-70h]
  _DWORD v26[24]; // [rsp+A0h] [rbp-60h] BYREF

  *a2 = 0;
  LODWORD(v4) = -1073741275;
  if ( *(_DWORD *)(a1 + 4) )
    return 0LL;
  EngAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
  v7 = gppdevList;
  if ( gppdevList )
  {
    while ( 1 )
    {
      v23 = v7;
      if ( !v7 )
        goto LABEL_25;
      if ( (*((_DWORD *)v7 + 14) & 0x401) != 1 )
        goto LABEL_25;
      v8 = *((_QWORD *)v7 + 325);
      if ( ((v8 + 4) & 0xFFFFFFFFFFFFFFFBuLL) == 0 || (*(_DWORD *)(v8 + 160) & 0x800000) == 0 )
        goto LABEL_25;
      memset(v26, 0, sizeof(v26));
      v9 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _DWORD *))qword_1C0101728)(
             a1,
             *(_QWORD *)(v8 + 256),
             *(unsigned int *)(v8 + 272),
             v26);
      v4 = v9;
      if ( v9 < 0 )
        break;
      v24[0] = *((__m128i *)v7 + 155);
      v24[1] = *((__m128i *)v7 + 156);
      v24[2] = *((__m128i *)v7 + 157);
      v24[3] = *((__m128i *)v7 + 158);
      v24[4] = *((__m128i *)v7 + 159);
      v25 = *((_OWORD *)v7 + 160);
      if ( v26[2] != _mm_srli_si128(*v24, 8).m128i_i32[1] )
      {
        v13 = 0;
        v14 = L"x";
        do
        {
          if ( *(_DWORD *)v14 > v26[2] )
            break;
          ++v13;
          v14 += 2;
        }
        while ( (__int64)v14 < (__int64)word_1C00ED6B4 );
        v15 = L"x";
        v16 = 0;
        do
        {
          if ( *(_DWORD *)v15 > v24[0].m128i_i32[3] )
            break;
          ++v16;
          v15 += 2;
        }
        while ( (__int64)v15 < (__int64)word_1C00ED6B4 );
        v17 = v13 - v16;
        v18 = v17;
        if ( (int)v25 > v17 )
          v18 = v25;
        if ( v18 >= SDWORD2(v25) )
        {
          v17 = DWORD2(v25);
        }
        else if ( (int)v25 > v17 )
        {
          v17 = v25;
        }
        v19 = *(_DWORD *)(*((_QWORD *)v7 + 325) + 272LL);
        v20 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v23);
        v21 = ((__int64 (__fastcall *)(struct _LUID *, _QWORD, _QWORD, __m128i *))qword_1C0101708)(
                v20,
                v19,
                (unsigned int)v17,
                v24);
        v4 = v21;
        if ( v21 < 0 )
          break;
        *a2 = 1;
      }
LABEL_25:
      v7 = (struct PDEV *)*((_QWORD *)v7 + 3);
      if ( !v7 )
        goto LABEL_26;
    }
    v22 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10, v6, v12);
    v22[3] = v4;
    v22[4] = *(_QWORD *)(*((_QWORD *)v7 + 325) + 256LL);
    v22[5] = *(unsigned int *)(*((_QWORD *)v7 + 325) + 272LL);
    WdLogEvent5_WdError(v22);
    goto LABEL_25;
  }
LABEL_26:
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v6);
  GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
  return (unsigned int)v4;
}
