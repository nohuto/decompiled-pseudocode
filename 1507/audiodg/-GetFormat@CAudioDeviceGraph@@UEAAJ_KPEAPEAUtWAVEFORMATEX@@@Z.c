/*
 * XREFs of ?GetFormat@CAudioDeviceGraph@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z @ 0x140032650
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x1400088A0 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?FindPipeInstance@CAudioDeviceGraph@@AEAAPEAVCPipeInstance@@_K@Z @ 0x14000ED7C (-FindPipeInstance@CAudioDeviceGraph@@AEAAPEAVCPipeInstance@@_K@Z.c)
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140026EE0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x14002E6EC (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetFormat(CAudioDeviceGraph *this, __int64 a2, struct tWAVEFORMATEX **a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  int v7; // edi
  struct CPipeInstance *PipeInstance; // rax
  __int64 v9; // rdi
  __int64 v10; // rdi
  const struct tWAVEFORMATEX *v11; // rax
  __int64 (__fastcall *v12)(CAudioMediaType *); // rsi
  CAudioMediaType *v14; // [rsp+30h] [rbp+8h] BYREF

  v14 = 0LL;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 232);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  if ( *((_DWORD *)this + 56) )
  {
    PipeInstance = CAudioDeviceGraph::FindPipeInstance(this, a2);
    if ( !PipeInstance )
      goto LABEL_4;
    v9 = *((_QWORD *)PipeInstance + 2);
    if ( !v9 )
      ATL::AtlThrowImpl(-2147467259);
    v10 = *(_QWORD *)(v9 + 16);
    if ( v10 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, CAudioMediaType **))(*(_QWORD *)v10 + 8LL))(v10, &v14);
      if ( v7 >= 0 )
      {
        v11 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v14 + 40LL))(v14);
        v7 = CloneWaveFormat(v11, a3);
      }
    }
    else
    {
LABEL_4:
      v7 = -2005139430;
    }
  }
  else
  {
    v7 = -2005139437;
  }
  LeaveCriticalSection(v3);
  if ( v7 < 0
    && *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0x38u,
      (__int64)&WPP_0cbafece5984d0b03ea3beb92e207a80_Traceguids,
      v7);
  }
  if ( v14 )
  {
    v12 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v14 + 16LL);
    if ( v12 == CAudioMediaType::Release )
      CAudioMediaType::Release(v14);
    else
      v12(v14);
  }
  return (unsigned int)v7;
}
