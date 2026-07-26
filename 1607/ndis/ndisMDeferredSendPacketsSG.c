/*
 * XREFs of ndisMDeferredSendPacketsSG @ 0x1C0054790
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C001C7E0 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     ndisMFreeSGList @ 0x1C004C610 (ndisMFreeSGList.c)
 *     ndisFreePaddedMdl @ 0x1C0053DD4 (ndisFreePaddedMdl.c)
 *     ndisMLoopbackPacketX @ 0x1C00555D0 (ndisMLoopbackPacketX.c)
 *     ndisMSendCompletePacketToNetBufferLists @ 0x1C0055774 (ndisMSendCompletePacketToNetBufferLists.c)
 */

char __fastcall ndisMDeferredSendPacketsSG(__int64 a1)
{
  unsigned int v1; // r12d
  int v3; // eax
  __int64 v4; // r10
  __int64 *v5; // rbp
  unsigned int v6; // esi
  __int64 v7; // rdi
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // r9
  int v11; // eax
  char v12; // al
  __int64 v13; // rcx
  struct _NDIS_STACK_RESERVED *v14; // r15
  _QWORD *v15; // rax
  __int64 v16; // r13
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 *v19; // r12
  unsigned int v20; // ebp
  __int64 v21; // rdi
  unsigned int v22; // r14d
  struct _NDIS_STACK_RESERVED *v23; // r15
  __int64 v24; // r13
  _QWORD *v25; // rax
  __int64 v26; // rdx
  _QWORD *v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 *v31; // rcx
  __int64 v32; // rax
  unsigned int v34; // [rsp+20h] [rbp-D8h]
  struct _NDIS_STACK_RESERVED *v35; // [rsp+28h] [rbp-D0h] BYREF
  void (__fastcall *v36)(_QWORD, _QWORD *, _QWORD); // [rsp+30h] [rbp-C8h]
  _QWORD v37[16]; // [rsp+40h] [rbp-B8h] BYREF

  v1 = *(unsigned __int16 *)(a1 + 538);
  v34 = v1;
  v36 = *(void (__fastcall **)(_QWORD, _QWORD *, _QWORD))(a1 + 1808);
  if ( (unsigned __int8)byte_1C00895CA >= 4u )
    WPP_SF_q(0x26u, &WPP_98491548b3413749efaf9ab44284e0a4_Traceguids, a1);
  v3 = *(_DWORD *)(a1 + 120);
  v4 = 0LL;
  if ( (v3 & 0x400000) == 0 && !*(_QWORD *)(a1 + 144) )
    *(_DWORD *)(a1 + 120) = v3 | 0x400000;
  if ( *(_QWORD *)(a1 + 128) == a1 + 128 )
    *(_QWORD *)(a1 + 144) = 0LL;
  if ( !*(_QWORD *)(a1 + 144) )
    goto LABEL_55;
  while ( (*(_DWORD *)(a1 + 120) & 0x400000) != 0 )
  {
    v5 = v37;
    v6 = v4;
    if ( !v1 )
      break;
    do
    {
      v7 = *(_QWORD *)(a1 + 144);
      if ( !v7 )
        break;
      NDIS_STACK_RESERVED_FROM_PACKET(*(struct _NDIS_PACKET **)(a1 + 144), &v35);
      v8 = v7 + 64;
      *(_QWORD *)(a1 + 144) = v4;
      v9 = *(_QWORD *)(v7 + 64);
      if ( v9 != v10 )
        *(_QWORD *)(a1 + 144) = v9 - 64;
      if ( ((v11 = *(_DWORD *)(a1 + 120), (v11 & 0x4000) != 0) || (v11 & 0x8800000) != 0 && *(_BYTE *)(v7 + 36) >= 0)
        && (v12 = ndisMLoopbackPacketX(a1, v7), v4 = 0LL, v12) )
      {
        v13 = *(_QWORD *)v8;
        v14 = v35;
        v15 = *(_QWORD **)(v7 + 72);
        v16 = *(_QWORD *)v35;
        if ( *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8 || *v15 != v8 )
          __fastfail(3u);
        *v15 = v13;
        *(_QWORD *)(v13 + 8) = v15;
        *(_QWORD *)(v7 + 72) = v7 + 64;
        *(_QWORD *)v8 = v8;
        *(_DWORD *)(a1 + 120) |= 0x400000u;
        *(_QWORD *)v14 = 1297040178LL;
        *(_QWORD *)(a1 + 520) = 0LL;
        *(_DWORD *)(a1 + 1856) = 0;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
        if ( *(_QWORD *)(*(unsigned __int16 *)(v7 + 42) + v7 + 80) )
          ndisMFreeSGList(a1, v7, v17);
        *((_DWORD *)v14 + 2) = 0;
        if ( (*(_BYTE *)(a1 + 928) & 8) != 0 && *(_QWORD *)(*(unsigned __int16 *)(v7 + 42) + v7 + 128) )
          ndisFreePaddedMdl(v7);
        v18 = *(unsigned __int16 *)(v7 + 42);
        *(_BYTE *)(v7 + 41) &= 0xC0u;
        if ( *(_QWORD *)(v18 + v7 + 112) )
          ndisMSendCompletePacketToNetBufferLists(a1, v7, 0LL);
        else
          (*(void (__fastcall **)(__int64, __int64))(v16 + 112))(v16, v7);
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
        v4 = 0LL;
        *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
        *(_DWORD *)(a1 + 1856) = 1509739;
      }
      else
      {
        *v5 = v7;
        ++v6;
        *(_BYTE *)(v7 + 41) |= 0x18u;
        ++v5;
        *(_DWORD *)(*(unsigned __int16 *)(v7 + 42) + v7 + 32) = v4;
      }
    }
    while ( v6 < v1 );
    if ( !v6 )
      break;
    *(_QWORD *)(a1 + 520) = v4;
    v19 = v37;
    *(_DWORD *)(a1 + 1856) = v4;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
    v36(*(_QWORD *)(a1 + 24), v37, v6);
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
    v4 = 0LL;
    *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
    v20 = 0;
    *(_DWORD *)(a1 + 1856) = 1509784;
    while ( 1 )
    {
      v21 = *v19;
      v22 = *(_DWORD *)(*(unsigned __int16 *)(*v19 + 42) + *v19 + 32);
      *(_BYTE *)(*v19 + 41) &= ~8u;
      if ( v22 != 259 )
        break;
LABEL_46:
      ++v20;
      ++v19;
      if ( v20 >= v6 )
        goto LABEL_51;
    }
    if ( v22 != -1073741670 )
    {
      NDIS_STACK_RESERVED_FROM_PACKET((struct _NDIS_PACKET *)v21, &v35);
      v23 = v35;
      v24 = *(_QWORD *)v35;
      if ( (*(_QWORD *)v35 & 0xFFFFFF00LL) != 0x4D4F4300 )
      {
        v25 = (_QWORD *)(v21 + 64);
        v26 = *(_QWORD *)(v21 + 64);
        v27 = *(_QWORD **)(v21 + 72);
        if ( *(_QWORD *)(v26 + 8) != v21 + 64 || (_QWORD *)*v27 != v25 )
          __fastfail(3u);
        *v27 = v26;
        *(_QWORD *)(v26 + 8) = v27;
        *(_QWORD *)(v21 + 72) = v21 + 64;
        *v25 = v25;
        *(_DWORD *)(a1 + 120) |= 0x400000u;
        *(_QWORD *)v23 = 1297040179LL;
        *(_QWORD *)(a1 + 520) = v4;
        *(_DWORD *)(a1 + 1856) = v4;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
        if ( *(_QWORD *)(*(unsigned __int16 *)(v21 + 42) + v21 + 80) )
          ndisMFreeSGList(a1, v21, v28);
        *((_DWORD *)v23 + 2) = 0;
        if ( (*(_BYTE *)(a1 + 928) & 8) != 0 && *(_QWORD *)(*(unsigned __int16 *)(v21 + 42) + v21 + 128) )
          ndisFreePaddedMdl(v21);
        v29 = *(unsigned __int16 *)(v21 + 42);
        *(_BYTE *)(v21 + 41) &= 0xC0u;
        if ( *(_QWORD *)(v29 + v21 + 112) )
          ndisMSendCompletePacketToNetBufferLists(a1, v21, v22);
        else
          (*(void (__fastcall **)(__int64, __int64, _QWORD))(v24 + 112))(v24, v21, v22);
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
        v4 = 0LL;
        *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
        *(_DWORD *)(a1 + 1856) = 1509811;
      }
      goto LABEL_46;
    }
    *(_DWORD *)(a1 + 120) &= ~0x400000u;
    *(_QWORD *)(a1 + 144) = v21;
    if ( v20 < v6 )
    {
      v30 = v6 - v20;
      v31 = &v37[v20];
      do
      {
        v32 = *v31++;
        *(_BYTE *)(v32 + 41) &= ~0x10u;
        --v30;
      }
      while ( v30 );
    }
LABEL_51:
    if ( *(_QWORD *)(a1 + 144) != v4 )
    {
      v1 = v34;
      continue;
    }
    break;
  }
LABEL_55:
  if ( (unsigned __int8)byte_1C00895CA >= 4u )
    WPP_SF_q(0x27u, &WPP_98491548b3413749efaf9ab44284e0a4_Traceguids, a1);
  return 0;
}
