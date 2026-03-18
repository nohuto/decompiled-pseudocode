/*
 * XREFs of Processor @ 0x1C000B270
 * Callers:
 *     <none>
 * Callees:
 *     PushScope @ 0x1C000CB74 (PushScope.c)
 *     CreateNameSpaceObject @ 0x1C00175D0 (CreateNameSpaceObject.c)
 *     HeapAlloc @ 0x1C0018760 (HeapAlloc.c)
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0025778 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C00258B8 (LogError.c)
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 */

__int64 __fastcall Processor(_QWORD *a1, _QWORD *a2)
{
  __int64 *v2; // rsi
  unsigned int NameSpaceObject; // ebx
  __int64 v6; // rax
  __int64 v7; // r8

  v2 = a2 + 8;
  NameSpaceObject = CreateNameSpaceObject(a1[40], *(_QWORD *)(a2[10] + 32LL), a1[10], a1[11], a2 + 8, 0);
  if ( !NameSpaceObject )
  {
    *(_WORD *)(*v2 + 66) = 12;
    *(_DWORD *)(*v2 + 88) = 12;
    v6 = HeapAlloc(a1[40], 1330794568LL, *(unsigned int *)(*v2 + 88));
    *(_QWORD *)(*v2 + 96) = v6;
    if ( v6 )
    {
      memset(*(void **)(*v2 + 96), 0, *(unsigned int *)(*v2 + 88));
      v7 = *(_QWORD *)(*v2 + 96);
      *(_BYTE *)(v7 + 8) = *(_BYTE *)(a2[10] + 56LL);
      *(_DWORD *)v7 = *(_DWORD *)(a2[10] + 96LL);
      *(_DWORD *)(v7 + 4) = *(_DWORD *)(a2[10] + 136LL);
      if ( ghCreate )
        ghCreate(12LL, *v2 + 120);
      return (unsigned int)PushScope((_DWORD)a1, a1[15], a2[5], 0, *v2, a1[11], a1[40], a2[11]);
    }
    else
    {
      NameSpaceObject = -1073741670;
      LogError(3221225626LL);
      AcpiDiagTraceAmlError(a1, 3221225626LL);
      PrintDebugMessage(151, 0, 0, 0, 0LL);
    }
  }
  return NameSpaceObject;
}
