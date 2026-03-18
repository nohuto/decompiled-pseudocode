/*
 * XREFs of PopPowerRequestActionInfo @ 0x1404E9BB8
 * Callers:
 *     NtPowerInformation @ 0x1404E7B24 (NtPowerInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     PoClearPowerRequestInternal @ 0x1400D1B8C (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x1400D1CD0 (PoSetPowerRequestInternal.c)
 *     PopSetSpecialRequest @ 0x140409CAC (PopSetSpecialRequest.c)
 *     PopClearSpecialRequest @ 0x14040A1E8 (PopClearSpecialRequest.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x1404E9DC4 (SeIsAppContainerOrIdentifyLevelContext.c)
 */

__int64 __fastcall PopPowerRequestActionInfo(__int64 a1)
{
  KPROCESSOR_MODE PreviousMode; // bp
  NTSTATUS IsAppContainerOrIdentifyLevelContext; // ebx
  _BYTE *v4; // rsi
  unsigned int v5; // edx
  NTSTATUS v6; // eax
  char v8; // [rsp+50h] [rbp+8h]
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
        IsAppContainerOrIdentifyLevelContext = SeIsAppContainerOrIdentifyLevelContext(0LL);
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
    v5 = *(_DWORD *)(a1 + 8);
    if ( *(_BYTE *)(a1 + 12) )
    {
      if ( v4[104] )
        v6 = PopSetSpecialRequest((__int64)v4, v5, *(void **)(a1 + 16));
      else
        v6 = PoSetPowerRequestInternal((__int64)v4, v5);
    }
    else if ( v4[104] )
    {
      v6 = PopClearSpecialRequest((__int64)v4, v5);
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
