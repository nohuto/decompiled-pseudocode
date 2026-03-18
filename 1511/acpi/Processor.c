/*
 * XREFs of Processor @ 0x1C0005920
 * Callers:
 *     <none>
 * Callees:
 *     PushScope @ 0x1C0005DD0 (PushScope.c)
 *     CreateNameSpaceObject @ 0x1C0010A20 (CreateNameSpaceObject.c)
 *     HeapAlloc @ 0x1C0011E70 (HeapAlloc.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00251C0 (memset.c)
 *     LogError @ 0x1C0043CD8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00453F0 (PrintDebugMessage.c)
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
    *(_WORD *)(*v2 + 58) = 12;
    *(_DWORD *)(*v2 + 80) = 12;
    v6 = HeapAlloc(a1[40], 1330794568LL, *(unsigned int *)(*v2 + 80));
    *(_QWORD *)(*v2 + 88) = v6;
    if ( v6 )
    {
      memset(*(void **)(*v2 + 88), 0, *(unsigned int *)(*v2 + 80));
      v7 = *(_QWORD *)(*v2 + 88);
      *(_BYTE *)(v7 + 8) = *(_BYTE *)(a2[10] + 56LL);
      *(_DWORD *)v7 = *(_DWORD *)(a2[10] + 96LL);
      *(_DWORD *)(v7 + 4) = *(_DWORD *)(a2[10] + 136LL);
      if ( ghCreate )
        ghCreate(12LL, *v2 + 112);
      return (unsigned int)PushScope((_DWORD)a1, a1[15], a2[5], 0, *v2, a1[11], a1[40], a2[11]);
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
