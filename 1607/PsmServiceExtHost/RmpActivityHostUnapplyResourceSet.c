/*
 * XREFs of RmpActivityHostUnapplyResourceSet @ 0x180019A9C
 * Callers:
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000F850 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x180012630 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     RmpActivityHostZeroProcessNotification @ 0x180019964 (RmpActivityHostZeroProcessNotification.c)
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002BBC4 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 * Callees:
 *     RmpObjectRelease @ 0x180002ED0 (RmpObjectRelease.c)
 *     ?IsPaused@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ @ 0x180010750 (-IsPaused@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ.c)
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180011700 (-PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 *     RmpActivityHostRemoveResourceSet @ 0x18002F580 (RmpActivityHostRemoveResourceSet.c)
 */

__int64 __fastcall RmpActivityHostUnapplyResourceSet(_DWORD *P, ExecutionModel::ResourceSet *this, char a3)
{
  int v5; // esi
  __int64 result; // rax
  __int64 v7; // rax
  LPCGUID v8; // r8
  LPCGUID v9; // r9
  int v10; // [rsp+30h] [rbp-49h] BYREF
  int v11; // [rsp+34h] [rbp-45h] BYREF
  __int64 v12; // [rsp+38h] [rbp-41h] BYREF
  __int64 v13; // [rsp+40h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  __int64 *v15; // [rsp+70h] [rbp-9h]
  int v16; // [rsp+78h] [rbp-1h]
  int v17; // [rsp+7Ch] [rbp+3h]
  int *v18; // [rsp+80h] [rbp+7h]
  int v19; // [rsp+88h] [rbp+Fh]
  int v20; // [rsp+8Ch] [rbp+13h]
  int *v21; // [rsp+90h] [rbp+17h]
  int v22; // [rsp+98h] [rbp+1Fh]
  int v23; // [rsp+9Ch] [rbp+23h]
  __int64 *v24; // [rsp+A0h] [rbp+27h]
  int v25; // [rsp+A8h] [rbp+2Fh]
  int v26; // [rsp+ACh] [rbp+33h]

  if ( P[12] == 1 )
    v5 = P[14];
  else
    v5 = 0;
  if ( (*((_DWORD *)this + 353) & 4) != 0 || *((_DWORD *)this + 34) )
  {
    ExecutionModel::ResourceSet::PerformReleaseResources(this, a3);
  }
  else
  {
    if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn((TraceLoggingHProvider)P, 9uLL) )
    {
      v7 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 171) + 64LL))((char *)this + 1368);
      v17 = 0;
      v20 = 0;
      v23 = 0;
      v26 = 0;
      v12 = v7;
      v15 = &v12;
      v18 = &v10;
      v11 = *((_DWORD *)this + 354);
      v21 = &v11;
      v13 = *((_QWORD *)P + 3);
      v24 = &v13;
      v16 = 8;
      v10 = v5;
      v19 = 4;
      v22 = 4;
      v25 = 8;
      TlgWrite((TraceLoggingHProvider)8, &unk_180040B5A, v8, v9, 6u, &pData);
    }
    RmpActivityHostRemoveResourceSet(P, this, 1LL);
    RmpObjectRelease(P);
    *((_QWORD *)this + 175) = 0LL;
  }
  if ( !*((_DWORD *)this + 34) )
    *((_QWORD *)this + 18) = -1LL;
  result = *((unsigned int *)this + 2);
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 460) = result;
  *((_BYTE *)this + 12) = 0;
  if ( P[12] == 1 )
  {
    result = ExecutionModel::_ResourceSetInfo::IsPaused((ExecutionModel::ResourceSet *)((char *)this + 1416));
    if ( (_BYTE)result )
      *((_BYTE *)P + 822) = 39;
  }
  return result;
}
