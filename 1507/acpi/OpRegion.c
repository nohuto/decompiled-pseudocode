/*
 * XREFs of OpRegion @ 0x1C001EFB0
 * Callers:
 *     <none>
 * Callees:
 *     CreateNameSpaceObject @ 0x1C000F9D0 (CreateNameSpaceObject.c)
 *     HeapAlloc @ 0x1C0013430 (HeapAlloc.c)
 *     MapUnmapPhysMem @ 0x1C001F0E8 (MapUnmapPhysMem.c)
 *     _guard_dispatch_icall_nop @ 0x1C00237F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0023B40 (memset.c)
 *     LogError @ 0x1C00442B8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
 */

__int64 __fastcall OpRegion(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned int NameSpaceObject; // edi
  __int64 v6; // rax
  unsigned int *v7; // rbx
  __int64 v8; // rcx
  char v9; // al

  v2 = a2 + 64;
  NameSpaceObject = CreateNameSpaceObject(
                      *(_QWORD *)(a1 + 320),
                      *(unsigned __int8 **)(*(_QWORD *)(a2 + 80) + 32LL),
                      *(_QWORD *)(a1 + 80),
                      *(struct _EX_RUNDOWN_REF **)(a1 + 88),
                      (struct _EX_RUNDOWN_REF **)(a2 + 64),
                      0);
  if ( !NameSpaceObject )
  {
    *(_WORD *)(*(_QWORD *)v2 + 58LL) = 10;
    *(_DWORD *)(*(_QWORD *)v2 + 80LL) = 40;
    v6 = HeapAlloc(*(_QWORD *)(a1 + 320), 1196576584, *(_DWORD *)(*(_QWORD *)v2 + 80LL));
    *(_QWORD *)(*(_QWORD *)v2 + 88LL) = v6;
    if ( v6 )
    {
      memset(*(void **)(*(_QWORD *)v2 + 88LL), 0, *(unsigned int *)(*(_QWORD *)v2 + 80LL));
      v7 = *(unsigned int **)(*(_QWORD *)v2 + 88LL);
      *((_BYTE *)v7 + 12) = *(_BYTE *)(*(_QWORD *)(a2 + 80) + 56LL);
      *(_QWORD *)v7 = *(_QWORD *)(*(_QWORD *)(a2 + 80) + 96LL);
      v7[2] = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 136LL);
      KeInitializeSpinLock((PKSPIN_LOCK)v7 + 3);
      v9 = *((_BYTE *)v7 + 12);
      if ( v9 )
      {
        if ( v9 == 1 )
          *(_QWORD *)v7 = *v7;
      }
      else
      {
        NameSpaceObject = MapUnmapPhysMem(v8, *(_QWORD *)v7, v7[2], v7);
        if ( !NameSpaceObject )
          *((_BYTE *)v7 + 13) |= 1u;
      }
      if ( ghCreate )
        ghCreate(10LL, *(_QWORD *)v2 + 112LL);
    }
    else
    {
      NameSpaceObject = -1073741670;
      LogError(3221225626LL);
      PrintDebugMessage(116, 0, 0, 0, 0LL);
    }
  }
  return NameSpaceObject;
}
