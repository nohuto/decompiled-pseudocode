/*
 * XREFs of PopPowerRequestActionInfo @ 0x1404544B8
 * Callers:
 *     NtPowerInformation @ 0x140452E2C (NtPowerInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     PoClearPowerRequestInternal @ 0x140097640 (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x140097768 (PoSetPowerRequestInternal.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x140452CA8 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     PopClearSpecialRequest @ 0x14063248C (PopClearSpecialRequest.c)
 *     PopSetSpecialRequest @ 0x140632588 (PopSetSpecialRequest.c)
 */

__int64 __fastcall PopPowerRequestActionInfo(__int64 a1)
{
  KPROCESSOR_MODE PreviousMode; // bp
  int IsAppContainerOrIdentifyLevelContext; // ebx
  _BYTE *v4; // rsi
  __int64 v5; // rdx
  int v6; // eax
  char v8; // [rsp+50h] [rbp+8h] BYREF
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  IsAppContainerOrIdentifyLevelContext = ObReferenceObjectByHandle(
                                           *(HANDLE *)a1,
                                           0,
                                           PopPowerRequestObjectType,
                                           PreviousMode,
                                           &Object,
                                           0LL);
  if ( IsAppContainerOrIdentifyLevelContext >= 0 )
  {
    v4 = Object;
    if ( *(_DWORD *)(a1 + 8) == 3 )
    {
      if ( PreviousMode )
      {
        IsAppContainerOrIdentifyLevelContext = SeIsAppContainerOrIdentifyLevelContext(0LL, &v8);
        if ( IsAppContainerOrIdentifyLevelContext >= 0 )
        {
          if ( !v8 )
            goto LABEL_4;
          IsAppContainerOrIdentifyLevelContext = -1073741790;
        }
LABEL_8:
        ObfDereferenceObject(v4);
        return (unsigned int)IsAppContainerOrIdentifyLevelContext;
      }
    }
    else if ( *(_DWORD *)(a1 + 8) == 4 && PreviousMode != 1 )
    {
      IsAppContainerOrIdentifyLevelContext = -1073741637;
      goto LABEL_8;
    }
LABEL_4:
    v5 = *(unsigned int *)(a1 + 8);
    if ( *(_BYTE *)(a1 + 12) )
    {
      if ( v4[104] )
        v6 = PopSetSpecialRequest(v4, v5, *(_QWORD *)(a1 + 16));
      else
        v6 = PoSetPowerRequestInternal((__int64)v4, v5);
    }
    else if ( v4[104] )
    {
      v6 = PopClearSpecialRequest(v4, v5);
    }
    else
    {
      v6 = PoClearPowerRequestInternal((__int64)v4, v5);
    }
    IsAppContainerOrIdentifyLevelContext = v6;
    goto LABEL_8;
  }
  return (unsigned int)IsAppContainerOrIdentifyLevelContext;
}
