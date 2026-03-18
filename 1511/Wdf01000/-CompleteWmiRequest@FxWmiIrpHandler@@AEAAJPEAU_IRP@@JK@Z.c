/*
 * XREFs of ?CompleteWmiRequest@FxWmiIrpHandler@@AEAAJPEAU_IRP@@JK@Z @ 0x1C0061FA4
 * Callers:
 *     ?_ChangeSingleInstance@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x1C0062260 (-_ChangeSingleInstance@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@.c)
 *     ?_ChangeSingleItem@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x1C0062320 (-_ChangeSingleItem@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z.c)
 *     ?_ExecuteMethod@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x1C00623C0 (-_ExecuteMethod@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z.c)
 *     ?_QueryAllData@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x1C0062490 (-_QueryAllData@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z.c)
 *     ?_QuerySingleInstance@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x1C0062A70 (-_QuerySingleInstance@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@.c)
 * Callees:
 *     WPP_IFR_SF_dd @ 0x1C0059110 (WPP_IFR_SF_dd.c)
 *     ?CompleteWmiExecuteMethodRequest@FxWmiIrpHandler@@AEAAXPEAU_IRP@@JK@Z @ 0x1C0061E7C (-CompleteWmiExecuteMethodRequest@FxWmiIrpHandler@@AEAAXPEAU_IRP@@JK@Z.c)
 *     ?CompleteWmiQueryAllDataRequest@FxWmiIrpHandler@@AEAAXPEAU_IRP@@JK@Z @ 0x1C0061EDC (-CompleteWmiQueryAllDataRequest@FxWmiIrpHandler@@AEAAXPEAU_IRP@@JK@Z.c)
 *     ?CompleteWmiQuerySingleInstanceRequest@FxWmiIrpHandler@@AEAAXPEAU_IRP@@JK@Z @ 0x1C0061F48 (-CompleteWmiQuerySingleInstanceRequest@FxWmiIrpHandler@@AEAAXPEAU_IRP@@JK@Z.c)
 */

__int64 __fastcall FxWmiIrpHandler::CompleteWmiRequest(
        FxWmiIrpHandler *this,
        _IRP *Irp,
        int Status,
        unsigned int BufferUsed)
{
  int v5; // ebx
  unsigned __int8 MinorFunction; // dl
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned int v8; // ebx

  v5 = Status;
  MinorFunction = Irp->Tail.Overlay.CurrentStackLocation->MinorFunction;
  if ( !MinorFunction )
  {
    FxWmiIrpHandler::CompleteWmiQueryAllDataRequest(this, Irp, Status, BufferUsed);
    goto LABEL_12;
  }
  if ( MinorFunction == 1 )
  {
    FxWmiIrpHandler::CompleteWmiQuerySingleInstanceRequest(this, Irp, Status, BufferUsed);
    goto LABEL_12;
  }
  if ( MinorFunction <= 3u )
  {
    if ( Status == -1073741789 )
    {
      m_Globals = this->m_Globals;
      v5 = -1073741113;
      if ( m_Globals->FxVerboseOn )
        WPP_IFR_SF_dd(m_Globals, 5u, 0xCu, 0x18u, WPP_FxWmiIrpHandler_cpp_Traceguids, -1073741789, -1073741113);
    }
    goto LABEL_9;
  }
  if ( MinorFunction != 9 )
  {
LABEL_9:
    Irp->IoStatus.Information = 0LL;
    Irp->IoStatus.Status = v5;
    goto LABEL_12;
  }
  FxWmiIrpHandler::CompleteWmiExecuteMethodRequest(this, Irp, Status, BufferUsed);
LABEL_12:
  v8 = Irp->IoStatus.Status;
  IofCompleteRequest(Irp, 0);
  return v8;
}
