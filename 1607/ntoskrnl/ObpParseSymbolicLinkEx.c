/*
 * XREFs of ObpParseSymbolicLinkEx @ 0x140475040
 * Callers:
 *     <none>
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140002F70 (xHalTimerWatchdogStop.c)
 *     ObReferenceObjectByPointer @ 0x14007F7E0 (ObReferenceObjectByPointer.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400C1B90 (PsIsCurrentThreadInServerSilo.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlIsSandboxedToken @ 0x1404118D0 (RtlIsSandboxedToken.c)
 */

NTSTATUS __fastcall ObpParseSymbolicLinkEx(
        unsigned __int16 *Object,
        POBJECT_TYPE ObjectType,
        struct _SECURITY_SUBJECT_CONTEXT *a3,
        KPROCESSOR_MODE a4,
        int a5,
        __int64 a6,
        unsigned __int16 *a7,
        int a8,
        int a9,
        __int64 a10,
        _QWORD *a11)
{
  unsigned int v14; // ebp
  unsigned int v15; // edi
  unsigned __int16 v16; // r12
  char *PoolWithTag; // r15
  char *v18; // rcx
  NTSTATUS result; // eax

  if ( (*((_DWORD *)Object + 7) & 2) != 0 && !RtlIsSandboxedToken(a3 + 1, a4) )
    return -1073741772;
  if ( *a7 )
  {
    if ( **((_WORD **)a7 + 1) != 92 )
      return -1073741788;
    goto LABEL_4;
  }
  if ( ObjectType != ObpSymbolicLinkObjectType || (*((_DWORD *)Object + 7) & 1) != 0 && PsIsCurrentThreadInServerSilo() )
    goto LABEL_4;
  result = ObReferenceObjectByPointer(Object, 0, ObjectType, a4);
  if ( result >= 0 )
  {
    *a11 = Object;
    return result;
  }
  if ( result == -1073741788 )
  {
LABEL_4:
    if ( (*((_DWORD *)Object + 7) & 8) != 0 )
      *(_DWORD *)(a10 + 4) &= *((_DWORD *)Object + 8);
    if ( (*((_DWORD *)Object + 7) & 4) != 0 )
      *(_QWORD *)(a10 + 8) = xHalTimerWatchdogStop();
    v14 = Object[4];
    if ( Object[4]
      && *(_WORD *)(*((_QWORD *)Object + 2) + 2 * ((unsigned __int64)Object[4] >> 1) - 2) == 92
      && *a7
      && **((_WORD **)a7 + 1) == 92 )
    {
      v14 -= 2;
    }
    v15 = v14 + *a7;
    if ( v15 > 0xFFF0 )
    {
      return -1073741562;
    }
    else
    {
      v16 = *(_WORD *)(a6 + 2);
      if ( v16 <= (unsigned __int16)v15 )
      {
        v16 = v15 + 2;
        PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(v15 + 2), 0x6D4E624Fu);
        if ( !PoolWithTag )
          return -1073741670;
      }
      else
      {
        PoolWithTag = *(char **)(a6 + 8);
      }
      if ( *a7 )
        memmove(&PoolWithTag[v14], *((const void **)a7 + 1), *a7);
      memmove(PoolWithTag, *((const void **)Object + 2), v14);
      *(_WORD *)&PoolWithTag[2 * ((unsigned __int64)(unsigned __int16)v15 >> 1)] = 0;
      v18 = *(char **)(a6 + 8);
      if ( PoolWithTag != v18 && v18 )
        ExFreePoolWithTag(v18, 0);
      *(_QWORD *)(a6 + 8) = PoolWithTag;
      *(_WORD *)a6 = v15;
      *(_WORD *)(a6 + 2) = v16;
      *a11 = Object;
      if ( (*((_DWORD *)Object + 7) & 1) != 0 )
        return 872;
      else
        return 260;
    }
  }
  return result;
}
