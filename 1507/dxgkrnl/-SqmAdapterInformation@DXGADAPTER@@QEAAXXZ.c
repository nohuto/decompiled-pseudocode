/*
 * XREFs of ?SqmAdapterInformation@DXGADAPTER@@QEAAXXZ @ 0x1C00BE7A0
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C00C323C (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002434 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     DxgkSqmCommonGeneric @ 0x1C000CDF0 (DxgkSqmCommonGeneric.c)
 *     DxgkSqmGenericString @ 0x1C000EF10 (DxgkSqmGenericString.c)
 *     DxgkSqmGenericDword @ 0x1C000EFF0 (DxgkSqmGenericDword.c)
 *     ?SqmRenderInformation@ADAPTER_RENDER@@QEAAXXZ @ 0x1C00C2294 (-SqmRenderInformation@ADAPTER_RENDER@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::SqmAdapterInformation(DXGADAPTER *this)
{
  int v2; // edi
  ADAPTER_RENDER *v3; // rcx
  int v4; // r8d
  int v5; // edx
  int v6; // eax
  int v7; // ebp
  char v8; // r8
  int v9; // edx
  __int64 v10; // [rsp+20h] [rbp-58h]
  int Data; // [rsp+80h] [rbp+8h] BYREF
  int v12; // [rsp+88h] [rbp+10h] BYREF
  int v13; // [rsp+90h] [rbp+18h] BYREF
  int DriverVersion; // [rsp+98h] [rbp+20h]

  v2 = 0;
  v3 = (ADAPTER_RENDER *)*((_QWORD *)this + 248);
  if ( v3 )
    ADAPTER_RENDER::SqmRenderInformation(v3);
  v4 = *((_DWORD *)this + 71);
  v5 = *((unsigned __int16 *)this + 132) | (*((unsigned __int16 *)this + 130) << 16);
  v6 = *((unsigned __int8 *)this + 276);
  v12 = *((unsigned __int16 *)this + 136) | (*((unsigned __int16 *)this + 134) << 16);
  Data = v5;
  v7 = ((unsigned __int8)v4 >> 5) & 1;
  v13 = v6;
  DriverVersion = DXGADAPTER::GetDriverVersion(this);
  v10 = *((_QWORD *)this + 121);
  if ( (v8 & 1) != 0 )
  {
    DxgkSqmCommonGeneric(0x1506u, 4u, &Data, 4u);
    DxgkSqmCommonGeneric(0x1507u, 4u, &v12, 4u);
    DxgkSqmCommonGeneric(0x1508u, 4u, &v13, 4u);
    DxgkSqmGenericDword(&Dxgk_SqmSetDwordEvt, 6593, DriverVersion);
    DxgkSqmCommonGeneric(0x29FFu, 4u, (char *)this + 260, 4u);
    DxgkSqmCommonGeneric(0x2A00u, 4u, (char *)this + 264, 4u);
    DxgkSqmCommonGeneric(0x2A01u, 4u, (char *)this + 268, 4u);
    DxgkSqmCommonGeneric(0x2A02u, 4u, (char *)this + 272, 4u);
    DxgkSqmGenericDword(&Dxgk_SqmSetDwordEvt, 12123, v7);
    v9 = 10951;
  }
  else
  {
    DxgkSqmCommonGeneric(0x1509u, 4u, &Data, 4u);
    DxgkSqmCommonGeneric(0x150Au, 4u, &v12, 4u);
    DxgkSqmCommonGeneric(0x150Bu, 4u, &v13, 4u);
    DxgkSqmGenericDword(&Dxgk_SqmSetDwordEvt, 6594, DriverVersion);
    DxgkSqmCommonGeneric(0x2A03u, 4u, (char *)this + 260, 4u);
    DxgkSqmCommonGeneric(0x2A04u, 4u, (char *)this + 264, 4u);
    DxgkSqmCommonGeneric(0x2A05u, 4u, (char *)this + 268, 4u);
    DxgkSqmCommonGeneric(0x2A06u, 4u, (char *)this + 272, 4u);
    v9 = 10952;
  }
  DxgkSqmGenericString(&Dxgk_SqmSetStringEvt, v9, v10);
  LOBYTE(v2) = *((_BYTE *)this + 1855) != 0;
  DxgkSqmGenericDword(&Dxgk_SqmSetDwordEvt, 12051, v2);
  *(_DWORD *)(*((_QWORD *)this + 392) + 424LL) = *((_DWORD *)this + 65);
  *(_QWORD *)(*((_QWORD *)this + 392) + 432LL) = *((_QWORD *)this + 131);
}
