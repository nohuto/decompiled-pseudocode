/*
 * XREFs of ?GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAVInteractiveControlDevice@@PEAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C023F134
 * Callers:
 *     ?GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@I@Z @ 0x1C023EADC (-GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@.c)
 * Callees:
 *     _TlgWrite @ 0x1C00E5414 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C021F6CC (_TlgCreateSz.c)
 *     ?GenerateWheelDelta@InteractiveControlDefaultScroller@@AEAAJPEAF@Z @ 0x1C023F368 (-GenerateWheelDelta@InteractiveControlDefaultScroller@@AEAAJPEAF@Z.c)
 *     ?GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJF@Z @ 0x1C023F438 (-GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJF@Z.c)
 *     ?Reset@InteractiveControlDefaultScroller@@AEAAXPEAVInteractiveControlDevice@@@Z @ 0x1C023F62C (-Reset@InteractiveControlDefaultScroller@@AEAAXPEAVInteractiveControlDevice@@@Z.c)
 *     ?UpdateBallistics@InteractiveControlDefaultScroller@@AEAAJXZ @ 0x1C023F99C (-UpdateBallistics@InteractiveControlDefaultScroller@@AEAAJXZ.c)
 *     ?UpdateTime@InteractiveControlDefaultScroller@@AEAAJPEAH@Z @ 0x1C023FA38 (-UpdateTime@InteractiveControlDefaultScroller@@AEAAJPEAH@Z.c)
 *     ?UpdateWindow@InteractiveControlDefaultScroller@@AEAAJPEAH@Z @ 0x1C023FA9C (-UpdateWindow@InteractiveControlDefaultScroller@@AEAAJPEAH@Z.c)
 */

__int64 __fastcall InteractiveControlDefaultScroller::GenerateMessages(
        InteractiveControlDefaultScroller *a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  int v4; // r14d
  int updated; // edi
  const GUID *v8; // r8
  const GUID *v9; // r9
  void *v10; // rax
  struct InteractiveControlDevice *v11; // rdx
  struct InteractiveControlDevice *v12; // rdx
  int v13; // r8d
  __int16 v15[2]; // [rsp+30h] [rbp-19h] BYREF
  int v16[3]; // [rsp+34h] [rbp-15h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp+17h] BYREF
  void *v19; // [rsp+70h] [rbp+27h]
  int v20; // [rsp+78h] [rbp+2Fh]
  int v21; // [rsp+7Ch] [rbp+33h]

  *((_DWORD *)a1 + 16) = a4;
  v4 = 1;
  if ( (unsigned int)(a4 - 1) <= 1 )
  {
    updated = InteractiveControlDefaultScroller::UpdateWindow(a1, (int *)v15);
    if ( updated >= 0 )
    {
      updated = InteractiveControlDefaultScroller::UpdateTime(a1, v16);
      if ( updated >= 0 )
      {
        if ( *(_DWORD *)v15 || v16[0] )
          InteractiveControlDefaultScroller::Reset(a1, v11);
        v12 = (struct InteractiveControlDevice *)*((unsigned int *)a1 + 17);
        v13 = *(_DWORD *)(a3 + 24);
        if ( !(_DWORD)v12 || v13 > 0 == (int)v12 > 0 )
          v4 = 0;
        updated = 0;
        *((_DWORD *)a1 + 17) = v13;
        if ( v4 )
        {
          InteractiveControlDefaultScroller::Reset(a1, v12);
          return (unsigned int)updated;
        }
        updated = InteractiveControlDefaultScroller::UpdateBallistics(a1);
        if ( updated >= 0 )
        {
          updated = InteractiveControlDefaultScroller::GenerateWheelDelta(a1, v15);
          if ( updated >= 0 )
          {
            updated = InteractiveControlDefaultScroller::GenerateWheelMessage(a1, v15[0]);
            if ( updated >= 0 || (unsigned int)hProvider <= 2 )
              return (unsigned int)updated;
          }
          else if ( (unsigned int)hProvider <= 2 )
          {
            return (unsigned int)updated;
          }
        }
        else if ( (unsigned int)hProvider <= 2 )
        {
          return (unsigned int)updated;
        }
        TlgCreateSz(&pDesc, "Function failed.");
        v16[0] = updated;
        v10 = v16;
        goto LABEL_27;
      }
      if ( (unsigned int)hProvider <= 2 )
        return (unsigned int)updated;
    }
    else if ( (unsigned int)hProvider <= 2 )
    {
      return (unsigned int)updated;
    }
    TlgCreateSz(&pDesc, "Function failed.");
    v10 = v15;
    *(_DWORD *)v15 = updated;
    goto LABEL_27;
  }
  updated = -1073700861;
  if ( (unsigned int)hProvider > 2 )
  {
    TlgCreateSz(&pDesc, "Function failed.");
    v10 = v15;
    *(_DWORD *)v15 = -1073700861;
LABEL_27:
    v21 = 0;
    v19 = v10;
    v20 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EF7B5, v8, v9, 4u, &pData);
  }
  return (unsigned int)updated;
}
