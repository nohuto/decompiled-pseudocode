/*
 * XREFs of DpiMiracastPerfHandleChunkInfo @ 0x1C0029720
 * Callers:
 *     DpiProcessMiracastNotifyDpc @ 0x1C000B3D0 (DpiProcessMiracastNotifyDpc.c)
 *     ?DpiMiracastCbReportChunkInfo@@YAJPEAXPEAUDXGK_MIRACAST_CHUNK_INFO@@0I@Z @ 0x1C0023880 (-DpiMiracastCbReportChunkInfo@@YAJPEAXPEAUDXGK_MIRACAST_CHUNK_INFO@@0I@Z.c)
 *     DpiMiracastChunkInfoCallbackDpc @ 0x1C0023CE0 (DpiMiracastChunkInfoCallbackDpc.c)
 *     DxgkHandleMiracastDrtEscape @ 0x1C00260D0 (DxgkHandleMiracastDrtEscape.c)
 *     DxgkHandleMiracastEscape @ 0x1C016ED10 (DxgkHandleMiracastEscape.c)
 * Callees:
 *     sub_1C0029020 @ 0x1C0029020 (sub_1C0029020.c)
 *     sub_1C00291C8 @ 0x1C00291C8 (sub_1C00291C8.c)
 */

void __fastcall DpiMiracastPerfHandleChunkInfo(__int64 a1, char a2, __int64 a3)
{
  _QWORD *v6; // rdi
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // rax
  int v10; // r8d
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  int v16; // [rsp+60h] [rbp+8h] BYREF

  if ( *(_BYTE *)(a1 + 720) && !*(_BYTE *)(a1 + 722) && (unsigned int)(*(_DWORD *)a3 - 2) <= 2 )
  {
    if ( !a2 )
      KeAcquireInStackQueuedSpinLock(&qword_1C0047008, &LockHandle);
    if ( *(_BYTE *)(a1 + 722) )
      goto LABEL_32;
    v6 = (_QWORD *)(a3 + 8);
    if ( (*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFuLL) <= *(_QWORD *)(a1 + 960) )
      goto LABEL_32;
    v7 = sub_1C00291C8(a1, (_QWORD *)(a3 + 8), 1, &v16);
    if ( v7 < 0 )
    {
      if ( v7 == -1073741275 )
      {
        v14 = *v6 & 0xFFFFFFFFFFLL;
        if ( *(_QWORD *)(a1 + 952) < v14 )
          *(_QWORD *)(a1 + 952) = v14;
      }
      else if ( v7 != -1073741266 || *(_DWORD *)a3 != 3 )
      {
        goto LABEL_32;
      }
      v10 = 1;
    }
    else if ( *(_DWORD *)a3 == 3 )
    {
      if ( (*v6 & 0xFFFFFF0000000000uLL) == 0 )
      {
        v8 = 32LL * v16;
        if ( !*(_QWORD *)(v8 + a1 + 968) )
        {
          v9 = *v6 & 0xFFFFFFFFFFLL;
          *(_QWORD *)(v8 + a1 + 968) = v9;
          *(_QWORD *)(a1 + 952) = v9;
          *(_DWORD *)(v8 + a1 + 976) = MEMORY[0xFFFFF78000000008] / 0x2710uLL;
          goto LABEL_32;
        }
      }
      v10 = 2;
    }
    else
    {
      v11 = 32LL * v16;
      if ( *(_BYTE *)(v11 + a1 + 994) || *(_BYTE *)(v11 + a1 + 993) )
        goto LABEL_32;
      if ( *(_DWORD *)a3 != 2 )
      {
        if ( !*(_QWORD *)(v11 + a1 + 968) )
        {
          v13 = *v6 & 0xFFFFFFFFFFLL;
          *(_QWORD *)(v11 + a1 + 968) = v13;
          *(_QWORD *)(a1 + 952) = v13;
          *(_DWORD *)(v11 + a1 + 976) = MEMORY[0xFFFFF78000000008] / 0x2710uLL;
        }
        *(_BYTE *)(v11 + a1 + 994) = 1;
        *(_DWORD *)(v11 + a1 + 980) = 0;
        *(_DWORD *)(v11 + a1 + 984) = 0;
        goto LABEL_32;
      }
      v12 = 32 * (v16 + 31LL);
      if ( *(_BYTE *)(v12 + a1) )
      {
LABEL_32:
        if ( !a2 )
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        return;
      }
      if ( *(_QWORD *)(v11 + a1 + 968) )
      {
        ++*(_DWORD *)(v11 + a1 + 984);
        if ( (*v6 & 0xFFFFFF0000000000uLL) == 0 )
        {
          *(_BYTE *)(v12 + a1) = 1;
          *(_DWORD *)(v11 + a1 + 980) = MEMORY[0xFFFFF78000000008] / 0x2710uLL - *(_DWORD *)(v11 + a1 + 976);
        }
        goto LABEL_32;
      }
      v10 = 4;
    }
    sub_1C0029020(a1, (_DWORD *)(a3 + 8), v10);
    goto LABEL_32;
  }
}
