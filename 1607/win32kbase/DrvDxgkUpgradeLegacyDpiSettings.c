/*
 * XREFs of DrvDxgkUpgradeLegacyDpiSettings @ 0x1C00C8FA0
 * Callers:
 *     <none>
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0026BF0 (GreReleaseSemaphoreInternal.c)
 *     ?pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ @ 0x1C0031A80 (-pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00740D0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

__int64 __fastcall DrvDxgkUpgradeLegacyDpiSettings(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rbx
  struct _LIST_ENTRY *Blink; // rdi
  struct _LIST_ENTRY *v7; // rsi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // esi
  const wchar_t *v14; // rax
  const wchar_t *v15; // rax
  int v16; // ecx
  int v17; // esi
  int Flink; // eax
  unsigned int v19; // ebx
  struct _LUID *v20; // rax
  int v21; // eax
  _QWORD *v22; // rax
  struct _LIST_ENTRY *v23; // [rsp+30h] [rbp-D0h] BYREF
  __m128i v24[5]; // [rsp+40h] [rbp-C0h] BYREF
  struct _LIST_ENTRY v25; // [rsp+90h] [rbp-70h]
  _DWORD v26[24]; // [rsp+A0h] [rbp-60h] BYREF

  *a2 = 0;
  LODWORD(v4) = -1073741275;
  if ( *(_DWORD *)(a1 + 4) )
    return 0LL;
  EngAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
  Blink = WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink;
  if ( WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink )
  {
    while ( 1 )
    {
      v23 = Blink;
      if ( !Blink )
        goto LABEL_25;
      if ( ((__int64)Blink[3].Blink & 0x401) != 1 )
        goto LABEL_25;
      v7 = Blink[162].Blink;
      if ( (((unsigned __int64)&v7->Flink + 4) & 0xFFFFFFFFFFFFFFFBuLL) == 0 || ((__int64)v7[10].Flink & 0x800000) == 0 )
        goto LABEL_25;
      memset(v26, 0, sizeof(v26));
      v8 = ((__int64 (__fastcall *)(__int64, struct _LIST_ENTRY *, _QWORD, _DWORD *))qword_1C011B890)(
             a1,
             v7[16].Flink,
             LODWORD(v7[17].Flink),
             v26);
      v4 = v8;
      if ( v8 < 0 )
        break;
      v24[0] = (__m128i)Blink[155];
      v24[1] = (__m128i)Blink[156];
      v24[2] = (__m128i)Blink[157];
      v24[3] = (__m128i)Blink[158];
      v24[4] = (__m128i)Blink[159];
      v25 = Blink[160];
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
        while ( (__int64)v14 < (__int64)word_1C010516C );
        v15 = L"x";
        v16 = 0;
        do
        {
          if ( *(_DWORD *)v15 > v24[0].m128i_i32[3] )
            break;
          ++v16;
          v15 += 2;
        }
        while ( (__int64)v15 < (__int64)word_1C010516C );
        v17 = v13 - v16;
        Flink = v17;
        if ( SLODWORD(v25.Flink) > v17 )
          Flink = (int)v25.Flink;
        if ( Flink >= SLODWORD(v25.Blink) )
        {
          v17 = (int)v25.Blink;
        }
        else if ( SLODWORD(v25.Flink) > v17 )
        {
          v17 = (int)v25.Flink;
        }
        v19 = (unsigned int)Blink[162].Blink[17].Flink;
        v20 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v23);
        v21 = ((__int64 (__fastcall *)(struct _LUID *, _QWORD, _QWORD, __m128i *))qword_1C011B870)(
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
      Blink = Blink[1].Blink;
      if ( !Blink )
        goto LABEL_26;
    }
    v22 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9, v11, v12);
    v22[3] = v4;
    v22[4] = Blink[162].Blink[16].Flink;
    v22[5] = LODWORD(Blink[162].Blink[17].Flink);
    WdLogEvent5_WdError(v22);
    goto LABEL_25;
  }
LABEL_26:
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt");
  GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
  return (unsigned int)v4;
}
