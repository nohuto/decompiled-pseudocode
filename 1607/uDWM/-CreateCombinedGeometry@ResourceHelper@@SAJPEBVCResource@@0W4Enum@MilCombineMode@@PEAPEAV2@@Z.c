/*
 * XREFs of ?CreateCombinedGeometry@ResourceHelper@@SAJPEBVCResource@@0W4Enum@MilCombineMode@@PEAPEAV2@@Z @ 0x180008950
 * Callers:
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x180023C8C (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180019EE0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ResourceHelper::CreateCombinedGeometry(__int64 a1, __int64 a2, __int64 a3, CBaseObject **a4)
{
  int v7; // eax
  unsigned int v8; // edi
  CBaseObject *v9; // rbx
  int v10; // edx
  __int64 v11; // r9
  int v12; // eax
  CBaseObject *v14; // [rsp+68h] [rbp+20h]

  v14 = *a4;
  if ( *a4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)*a4 + 2);
    v9 = v14;
  }
  else
  {
    v7 = CResource::Create(7LL, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4));
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x76u);
LABEL_12:
      v9 = v14;
      goto LABEL_13;
    }
    v9 = v14;
  }
  if ( a2 )
    v10 = *(_DWORD *)(a2 + 24);
  else
    v10 = 0;
  if ( a1 )
    v11 = *(unsigned int *)(a1 + 24);
  else
    v11 = 0LL;
  v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, int))(**((_QWORD **)v9 + 2) + 1120LL))(
          *((_QWORD *)v9 + 2),
          *((unsigned int *)v9 + 6),
          1LL,
          v11,
          v10);
  v8 = v12;
  if ( v12 >= 0 )
  {
    if ( *a4 )
      CBaseObject::Release(*a4);
    *a4 = v9;
    _InterlockedIncrement((volatile signed __int32 *)v9 + 2);
    goto LABEL_12;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x7Du);
LABEL_13:
  if ( v9 )
    CBaseObject::Release(v9);
  return v8;
}
