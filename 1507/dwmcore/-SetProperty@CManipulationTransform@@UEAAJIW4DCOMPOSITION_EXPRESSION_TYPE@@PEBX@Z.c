/*
 * XREFs of ?SetProperty@CManipulationTransform@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180016630
 * Callers:
 *     ?ProcessSetComponents@CManipulationTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATIONTRANSFORM_SETCOMPONENTS@@@Z @ 0x18001678C (-ProcessSetComponents@CManipulationTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATIONTR.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CManipulationTransform::SetProperty(__int64 a1, int a2, int a3, __int64 a4)
{
  unsigned int v4; // ebx
  int v6; // edx
  int v7; // edx
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx

  v4 = 0;
  if ( a3 != 51 )
    goto LABEL_16;
  if ( a2 )
  {
    v6 = a2 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 != 1 )
          goto LABEL_16;
        v8 = a1 + 148;
      }
      else
      {
        v8 = a1 + 136;
      }
    }
    else
    {
      v8 = a1 + 124;
    }
  }
  else
  {
    v8 = a1 + 112;
  }
  if ( !v8 )
  {
LABEL_16:
    v4 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x102u);
    return v4;
  }
  v9 = *(_QWORD *)v8 - *(_QWORD *)a4;
  if ( *(_QWORD *)v8 == *(_QWORD *)a4 )
    v9 = *(unsigned int *)(v8 + 8) - (unsigned __int64)*(unsigned int *)(a4 + 8);
  if ( v9 )
  {
    *(_QWORD *)v8 = *(_QWORD *)a4;
    *(_DWORD *)(v8 + 8) = *(_DWORD *)(a4 + 8);
    *(_BYTE *)(a1 + 224) = 1;
    CResource::NotifyOnChanged(a1, 0LL, 0LL);
  }
  return v4;
}
