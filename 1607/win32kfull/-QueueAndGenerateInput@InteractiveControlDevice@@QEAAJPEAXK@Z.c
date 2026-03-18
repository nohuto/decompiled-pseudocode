/*
 * XREFs of ?QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z @ 0x1C023DC24
 * Callers:
 *     ?OnInputReport@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@PEAXK@Z @ 0x1C023B958 (-OnInputReport@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@PEAXK@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00E5414 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ??0InteractiveControlInput@@QEAA@PEAVInteractiveControlDevice@@@Z @ 0x1C015A740 (--0InteractiveControlInput@@QEAA@PEAVInteractiveControlDevice@@@Z.c)
 *     _TlgCreateSz @ 0x1C021F6CC (_TlgCreateSz.c)
 *     ??_GInteractiveControlInput@@QEAAPEAXI@Z @ 0x1C023C8FC (--_GInteractiveControlInput@@QEAAPEAXI@Z.c)
 *     ?DetermineMessageCreationFlags@InteractiveControlDevice@@QEAAIPEAVInteractiveControlInput@@0@Z @ 0x1C023D00C (-DetermineMessageCreationFlags@InteractiveControlDevice@@QEAAIPEAVInteractiveControlInput@@0@Z.c)
 *     ?GetPreviousInputReport@InteractiveControlDevice@@QEAAHPEAU_LIST_ENTRY@@PEAPEAVInteractiveControlInput@@@Z @ 0x1C023D288 (-GetPreviousInputReport@InteractiveControlDevice@@QEAAHPEAU_LIST_ENTRY@@PEAPEAVInteractiveContro.c)
 *     ?PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1C023DA94 (-PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 *     ?QueueInput@InteractiveControlDevice@@QEAAXPEAU_LIST_ENTRY@@PEAVInteractiveControlInput@@@Z @ 0x1C023DE60 (-QueueInput@InteractiveControlDevice@@QEAAXPEAU_LIST_ENTRY@@PEAVInteractiveControlInput@@@Z.c)
 *     ?UpdateInputTarget@InteractiveControlDevice@@QEAAPEAUtagWND@@I@Z @ 0x1C023E93C (-UpdateInputTarget@InteractiveControlDevice@@QEAAPEAUtagWND@@I@Z.c)
 *     ?GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@I@Z @ 0x1C023EADC (-GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@.c)
 *     ?ParseInputReport@InteractiveControlInput@@QEAAJPEAEK@Z @ 0x1C023EE14 (-ParseInputReport@InteractiveControlInput@@QEAAJPEAEK@Z.c)
 */

__int64 __fastcall InteractiveControlDevice::QueueAndGenerateInput(
        InteractiveControlDevice *this,
        unsigned __int8 *a2,
        unsigned int a3)
{
  __int64 v3; // r12
  unsigned __int8 *v4; // rsi
  InteractiveControlInput *v5; // rbx
  int Messages; // edi
  LPCGUID v8; // r9
  LPCGUID v9; // r8
  unsigned __int8 *v10; // r13
  InteractiveControlInput *v11; // rax
  __int64 v12; // r8
  unsigned int v13; // eax
  unsigned int v14; // r15d
  LPCGUID v15; // r8
  LPCGUID v16; // r9
  struct InteractiveControlInput *v18; // [rsp+30h] [rbp-69h] BYREF
  int v19; // [rsp+38h] [rbp-61h] BYREF
  struct tagWND *updated; // [rsp+40h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-29h] BYREF
  struct InteractiveControlInput **v23; // [rsp+80h] [rbp-19h]
  int v24; // [rsp+88h] [rbp-11h]
  int v25; // [rsp+8Ch] [rbp-Dh]
  struct tagWND **v26; // [rsp+90h] [rbp-9h]
  int v27; // [rsp+98h] [rbp-1h]
  int v28; // [rsp+9Ch] [rbp+3h]
  struct InteractiveControlInput **v29; // [rsp+A0h] [rbp+7h]
  int v30; // [rsp+A8h] [rbp+Fh]
  int v31; // [rsp+ACh] [rbp+13h]

  v3 = *((unsigned __int16 *)this + 60);
  v4 = a2;
  v5 = 0LL;
  v18 = 0LL;
  Messages = 0;
  if ( a3 % (unsigned int)v3 )
  {
    Messages = -1073739509;
    if ( (unsigned int)hProvider > 2 )
    {
      TlgCreateSz(&pDesc, "InteractiveControlDevice::QueueAndGenerateInput -> Invalid report length.");
      v25 = 0;
      v28 = 0;
      v31 = 0;
      v23 = (struct InteractiveControlInput **)&v19;
      v26 = &updated;
      v24 = 4;
      v27 = 4;
      v30 = 4;
      v19 = -1073739509;
      LODWORD(updated) = (_DWORD)v8;
      LODWORD(v18) = v3;
      v29 = &v18;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EF720, v9, v8, 6u, &pData);
    }
  }
  else
  {
    v10 = &a2[a3];
    if ( a2 < v10 )
    {
      while ( 1 )
      {
        if ( !v5 )
        {
          v11 = (InteractiveControlInput *)Win32AllocPool(96LL, 1819440195LL);
          v5 = v11 ? InteractiveControlInput::InteractiveControlInput(v11, this) : 0LL;
          if ( !v5 )
            return (unsigned int)-1073741670;
        }
        Messages = InteractiveControlInput::ParseInputReport(v5, v4, v3);
        if ( Messages < 0 )
          break;
        InteractiveControlDevice::GetPreviousInputReport(this, 0LL, (struct _LIST_ENTRY **)&v18);
        v13 = InteractiveControlDevice::DetermineMessageCreationFlags(this, v18, v5);
        v14 = v13;
        if ( v13 )
        {
          updated = InteractiveControlDevice::UpdateInputTarget(this, v13);
          InteractiveControlDevice::PerformInputActions(this, v5, v14);
          InteractiveControlDevice::QueueInput(this, 0LL, v5);
          if ( !*((_DWORD *)this + 105) )
            Messages = InteractiveControlInput::GenerateMessages(v5, updated, *((unsigned int *)this + 27), v14);
          v5 = 0LL;
        }
        v4 += v3;
        if ( v4 >= v10 )
          goto LABEL_20;
      }
      if ( (unsigned int)hProvider > 2 )
      {
        TlgCreateSz(&pDesc, "Function failed.");
        v25 = 0;
        v23 = &v18;
        v24 = 4;
        LODWORD(v18) = Messages;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EF7B5, v15, v16, 4u, &pData);
      }
LABEL_20:
      if ( v5 )
        InteractiveControlInput::`scalar deleting destructor'(v5, 1LL, v12);
    }
  }
  return (unsigned int)Messages;
}
