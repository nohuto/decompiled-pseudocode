/*
 * XREFs of RmpEnforcementSettingsUpdateLimit @ 0x180004914
 * Callers:
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAJXZ @ 0x18000F7D0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAJXZ.c)
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180012140 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180034400 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 *     RmpCoreApiSetHostLimits @ 0x180042040 (RmpCoreApiSetHostLimits.c)
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 */

int __fastcall RmpEnforcementSettingsUpdateLimit(__int64 a1, __int64 a2)
{
  GUID *v2; // r8
  unsigned __int64 v3; // rax
  __int64 v5; // [rsp+30h] [rbp-49h] BYREF
  __int64 v6; // [rsp+38h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  __int64 *v8; // [rsp+60h] [rbp-19h]
  __int64 v9; // [rsp+68h] [rbp-11h]
  __int64 *v10; // [rsp+70h] [rbp-9h]
  __int64 v11; // [rsp+78h] [rbp-1h]
  __int64 v12; // [rsp+80h] [rbp+7h]
  __int64 v13; // [rsp+88h] [rbp+Fh]
  __int64 v14; // [rsp+90h] [rbp+17h]
  __int64 v15; // [rsp+98h] [rbp+1Fh]
  __int64 v16; // [rsp+A0h] [rbp+27h]
  __int64 v17; // [rsp+A8h] [rbp+2Fh]
  __int64 v18; // [rsp+B0h] [rbp+37h]
  __int64 v19; // [rsp+B8h] [rbp+3Fh]

  v2 = (GUID *)(a2 + 16);
  v5 = *(_QWORD *)(a2 + 16);
  v3 = *(_QWORD *)(a2 + 24);
  if ( !v3 )
  {
    v3 = *(_QWORD *)(a2 + 40);
    if ( v3 )
    {
      if ( *(_QWORD *)(a2 + 32) < v3 )
        v3 = *(_QWORD *)(a2 + 32);
    }
    else
    {
      v3 = *(_QWORD *)(a2 + 32);
    }
  }
  *(_QWORD *)&v2->Data1 = v3;
  if ( (unsigned int)dword_1800690A0 > 4 && (qword_1800690B0 & 1) != 0 )
  {
    v3 = qword_1800690B8 & 1;
    if ( v3 == qword_1800690B8 )
    {
      v6 = *(_QWORD *)(a1 + 24);
      v8 = &v6;
      v10 = &v5;
      v14 = a2 + 40;
      v16 = a2 + 32;
      v9 = 8LL;
      v11 = 8LL;
      v12 = a2 + 24;
      v13 = 8LL;
      v15 = 8LL;
      v17 = 8LL;
      v18 = a2 + 16;
      v19 = 8LL;
      LODWORD(v3) = TlgWrite((TraceLoggingHProvider)8, &unk_18005B098, v2, (LPCGUID)(a2 + 24), 8u, &pData);
    }
  }
  return v3;
}
