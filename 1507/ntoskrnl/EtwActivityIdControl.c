/*
 * XREFs of EtwActivityIdControl @ 0x14011B7E4
 * Callers:
 *     IoReuseIrp @ 0x14010B380 (IoReuseIrp.c)
 *     IopInitActivityIdIrp @ 0x1401F2680 (IopInitActivityIdIrp.c)
 *     IoSetActivityIdIrp @ 0x1401F669C (IoSetActivityIdIrp.c)
 *     IoCaptureLiveDump @ 0x140676C1C (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x1406771E4 (IoWriteDeferredLiveDumpData.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall EtwActivityIdControl(ULONG ControlCode, LPGUID ActivityId)
{
  volatile signed __int64 *EtwSupport; // rcx
  char *Teb; // rax
  GUID *v5; // rax
  volatile signed __int64 *v6; // rdx
  GUID v7; // xmm1
  NTSTATUS v8; // [rsp+0h] [rbp-38h]
  _QWORD *v9; // [rsp+50h] [rbp+18h]
  char *v10; // [rsp+58h] [rbp+20h]

  v8 = 0;
  if ( ControlCode == 3 )
  {
    EtwSupport = (volatile signed __int64 *)KeGetCurrentPrcb()->EtwSupport;
    *(_QWORD *)ActivityId->Data4 = _InterlockedIncrement64(EtwSupport + 137);
    *(_QWORD *)&ActivityId->Data1 = *((_QWORD *)EtwSupport + 136);
  }
  else
  {
    if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 || KeGetCurrentThread()->ApcStateIndex == 1 )
      Teb = 0LL;
    else
      Teb = (char *)KeGetCurrentThread()->Teb;
    v10 = Teb;
    if ( !Teb )
      return -1073741637;
    v9 = Teb + 5904;
    if ( KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7] )
    {
      v5 = (GUID *)(Teb + 12112);
      v9 = v10 + 12112;
    }
    else
    {
      v5 = (GUID *)(Teb + 5904);
    }
    switch ( ControlCode )
    {
      case 1u:
        *ActivityId = *v5;
        break;
      case 2u:
        *v5 = *ActivityId;
        break;
      case 4u:
        v7 = *v5;
        *v5 = *ActivityId;
        *ActivityId = v7;
        break;
      case 5u:
        *ActivityId = *v5;
        v6 = (volatile signed __int64 *)KeGetCurrentPrcb()->EtwSupport;
        v9[1] = _InterlockedIncrement64(v6 + 137);
        *v9 = *((_QWORD *)v6 + 136);
        break;
      default:
        return -1073741811;
    }
  }
  return v8;
}
