/*
 * XREFs of EtwActivityIdControl @ 0x1400E48B0
 * Callers:
 *     IoReuseIrp @ 0x140100350 (IoReuseIrp.c)
 *     IopInitActivityIdIrp @ 0x1401B73A0 (IopInitActivityIdIrp.c)
 *     IoSetActivityIdIrp @ 0x1401BB3D4 (IoSetActivityIdIrp.c)
 *     IoCaptureLiveDump @ 0x1405FC30C (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x1405FC8A4 (IoWriteDeferredLiveDumpData.c)
 * Callees:
 *     KeIsAttachedProcess @ 0x1400701C0 (KeIsAttachedProcess.c)
 */

NTSTATUS __stdcall EtwActivityIdControl(ULONG ControlCode, LPGUID ActivityId)
{
  volatile signed __int64 *EtwSupport; // rcx
  char *Teb; // rax
  GUID *v7; // rax
  ULONG v8; // ebx
  ULONG v9; // ebx
  ULONG v10; // ebx
  volatile signed __int64 *v11; // rdx
  GUID v12; // xmm1
  NTSTATUS v13; // [rsp+20h] [rbp-28h]
  _QWORD *v14; // [rsp+60h] [rbp+18h]
  char *v15; // [rsp+68h] [rbp+20h]

  v13 = 0;
  if ( ControlCode == 3 )
  {
    EtwSupport = (volatile signed __int64 *)KeGetCurrentPrcb()->EtwSupport;
    *(_QWORD *)ActivityId->Data4 = _InterlockedIncrement64(EtwSupport + 137);
    *(_QWORD *)&ActivityId->Data1 = *((_QWORD *)EtwSupport + 136);
    return v13;
  }
  if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 || KeIsAttachedProcess() )
    Teb = 0LL;
  else
    Teb = (char *)KeGetCurrentThread()->Teb;
  v15 = Teb;
  if ( Teb )
  {
    v14 = Teb + 5904;
    if ( KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7] )
    {
      v7 = (GUID *)(Teb + 12112);
      v14 = v15 + 12112;
    }
    else
    {
      v7 = (GUID *)(Teb + 5904);
    }
    v8 = ControlCode - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 2;
        if ( v10 )
        {
          if ( v10 == 1 )
          {
            *ActivityId = *v7;
            v11 = (volatile signed __int64 *)KeGetCurrentPrcb()->EtwSupport;
            v14[1] = _InterlockedIncrement64(v11 + 137);
            *v14 = *((_QWORD *)v11 + 136);
          }
          else
          {
            return -1073741811;
          }
        }
        else
        {
          v12 = *v7;
          *v7 = *ActivityId;
          *ActivityId = v12;
        }
      }
      else
      {
        *v7 = *ActivityId;
      }
    }
    else
    {
      *ActivityId = *v7;
    }
    return v13;
  }
  return -1073741637;
}
