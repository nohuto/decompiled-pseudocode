/*
 * XREFs of Processor @ 0x1C0020ED0
 * Callers:
 *     <none>
 * Callees:
 *     CreateNameSpaceObject @ 0x1C000F9D0 (CreateNameSpaceObject.c)
 *     HeapAlloc @ 0x1C0013430 (HeapAlloc.c)
 *     PushScope @ 0x1C00156E0 (PushScope.c)
 *     _guard_dispatch_icall_nop @ 0x1C00237F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0023B40 (memset.c)
 *     LogError @ 0x1C00442B8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
 */

__int64 __fastcall Processor(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rsi
  unsigned int NameSpaceObject; // ebx
  __int64 v6; // rax
  __int64 v7; // r8

  v2 = a2 + 8;
  NameSpaceObject = CreateNameSpaceObject(
                      *(_QWORD *)(a1 + 320),
                      *(unsigned __int8 **)(a2[10] + 32),
                      *(_QWORD *)(a1 + 80),
                      *(struct _EX_RUNDOWN_REF **)(a1 + 88),
                      (struct _EX_RUNDOWN_REF **)a2 + 8,
                      0);
  if ( !NameSpaceObject )
  {
    *(_WORD *)(*v2 + 58) = 12;
    *(_DWORD *)(*v2 + 80) = 12;
    v6 = HeapAlloc(*(_QWORD *)(a1 + 320), 1330794568, *(_DWORD *)(*v2 + 80));
    *(_QWORD *)(*v2 + 88) = v6;
    if ( v6 )
    {
      memset(*(void **)(*v2 + 88), 0, *(unsigned int *)(*v2 + 80));
      v7 = *(_QWORD *)(*v2 + 88);
      *(_BYTE *)(v7 + 8) = *(_BYTE *)(a2[10] + 56);
      *(_DWORD *)v7 = *(_DWORD *)(a2[10] + 96);
      *(_DWORD *)(v7 + 4) = *(_DWORD *)(a2[10] + 136);
      if ( ghCreate )
        ghCreate(12LL, *v2 + 112);
      return (unsigned int)PushScope(
                             (_QWORD *)a1,
                             *(_QWORD *)(a1 + 120),
                             a2[5],
                             0LL,
                             *v2,
                             *(_QWORD *)(a1 + 88),
                             *(_QWORD *)(a1 + 320),
                             a2[11]);
    }
    else
    {
      NameSpaceObject = -1073741670;
      LogError(3221225626LL);
      PrintDebugMessage(151, 0, 0, 0, 0LL);
    }
  }
  return NameSpaceObject;
}
