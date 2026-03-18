/*
 * XREFs of WinSqmEventEnabled @ 0x1C0070890
 * Callers:
 *     WinSqmEndSession @ 0x1C006F750 (WinSqmEndSession.c)
 *     WinSqmAddToStreamEx @ 0x1C0070640 (WinSqmAddToStreamEx.c)
 *     ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C0070808 (-_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z.c)
 *     WinSqmAddToStream @ 0x1C00BC3A0 (WinSqmAddToStream.c)
 *     WinSqmSetString @ 0x1C00BC59C (WinSqmSetString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WinSqmEventEnabled(PCEVENT_DESCRIPTOR EventDescriptor, void *Source1)
{
  unsigned int v2; // ebx
  char BufferChainingDpc; // al
  bool v6; // zf

  v2 = 0;
  if ( *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement )
  {
    BufferChainingDpc = (char)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc;
    if ( !LODWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
      return EtwEventEnabled(*(REGHANDLE *)&WPP_MAIN_CB.AlignmentRequirement, EventDescriptor);
    if ( Source1 )
    {
      if ( RtlCompareMemory(Source1, &unk_1C0101C58, 0x10uLL) != 16 )
      {
        v6 = ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) == 0;
        goto LABEL_10;
      }
      BufferChainingDpc = (char)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc;
    }
    v6 = (BufferChainingDpc & 1) == 0;
LABEL_10:
    if ( !v6 )
      return v2;
    return EtwEventEnabled(*(REGHANDLE *)&WPP_MAIN_CB.AlignmentRequirement, EventDescriptor);
  }
  return v2;
}
