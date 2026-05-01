/*
 * XREFs of ?RmpActivityHostUnapplyResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@K@Z @ 0x180002510
 * Callers:
 *     ?RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800025B8 (-RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000D438 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x18000F930 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002AE68 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?IsPaused@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ @ 0x18000E344 (-IsPaused@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ.c)
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180010080 (-PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180014210 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpActivityHostRemoveResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@W4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x1800142B4 (-RmpActivityHostRemoveResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@W4_.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

void __fastcall RmpActivityHostUnapplyResourceSet(
        struct _RM_ACTIVITY_HOST *a1,
        struct ExecutionModel::ResourceSet *a2,
        unsigned int a3)
{
  const struct _TlgProvider_t *v5; // rcx
  int v6; // eax
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r8
  const GUID *v9; // r9
  __int64 v10; // rax
  int v11; // [rsp+30h] [rbp-49h] BYREF
  int v12; // [rsp+34h] [rbp-45h] BYREF
  __int64 v13; // [rsp+38h] [rbp-41h] BYREF
  __int64 v14; // [rsp+40h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  __int64 *v16; // [rsp+70h] [rbp-9h]
  int v17; // [rsp+78h] [rbp-1h]
  int v18; // [rsp+7Ch] [rbp+3h]
  int *v19; // [rsp+80h] [rbp+7h]
  int v20; // [rsp+88h] [rbp+Fh]
  int v21; // [rsp+8Ch] [rbp+13h]
  int *v22; // [rsp+90h] [rbp+17h]
  int v23; // [rsp+98h] [rbp+1Fh]
  int v24; // [rsp+9Ch] [rbp+23h]
  __int64 *v25; // [rsp+A0h] [rbp+27h]
  int v26; // [rsp+A8h] [rbp+2Fh]
  int v27; // [rsp+ACh] [rbp+33h]

  if ( *((_DWORD *)a1 + 14) == 1 )
    v5 = (const struct _TlgProvider_t *)*((unsigned int *)a1 + 16);
  else
    v5 = 0LL;
  if ( (*((_DWORD *)a2 + 351) & 4) != 0 || *((_DWORD *)a2 + 34) )
  {
    ExecutionModel::ResourceSet::PerformReleaseResources(a2, a3);
  }
  else
  {
    if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v5, 9uLL) )
    {
      v10 = *((_QWORD *)a2 + 230);
      v18 = 0;
      v21 = 0;
      v24 = 0;
      v27 = 0;
      v13 = v10;
      v16 = &v13;
      v19 = &v11;
      v12 = *((_DWORD *)a2 + 352);
      v22 = &v12;
      v14 = *((_QWORD *)a1 + 3);
      v25 = &v14;
      v17 = (_DWORD)v8 + 4;
      v11 = (int)v7;
      v20 = (int)v8;
      v23 = (int)v8;
      v26 = (_DWORD)v8 + 4;
      TlgWrite(v7, &unk_18004158D, v8, v9, 6u, &pData);
    }
    RmpActivityHostRemoveResourceSet(a1, a2, 1LL);
    RmpObjectRelease(a1);
    *((_QWORD *)a2 + 174) = 0LL;
  }
  if ( !*((_DWORD *)a2 + 34) )
    *((_QWORD *)a2 + 18) = -1LL;
  v6 = *((_DWORD *)a2 + 2);
  *((_DWORD *)a2 + 2) = 0;
  *((_DWORD *)a2 + 458) = v6;
  *((_BYTE *)a2 + 12) = 0;
  if ( *((_DWORD *)a1 + 14) == 1
    && ExecutionModel::_ResourceSetInfo::IsPaused((struct ExecutionModel::ResourceSet *)((char *)a2 + 1408)) )
  {
    *((_BYTE *)a1 + 822) = 39;
  }
}
