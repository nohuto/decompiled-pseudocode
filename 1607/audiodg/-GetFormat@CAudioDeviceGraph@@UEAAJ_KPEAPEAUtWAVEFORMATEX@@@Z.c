/*
 * XREFs of ?GetFormat@CAudioDeviceGraph@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z @ 0x14002F540
 * Callers:
 *     <none>
 * Callees:
 *     ?FindPipeInstance@CAudioDeviceGraph@@AEAAPEAVCPipeInstance@@_K@Z @ 0x1400060A4 (-FindPipeInstance@CAudioDeviceGraph@@AEAAPEAVCPipeInstance@@_K@Z.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x14000BA70 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140025E9C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x14002BDB8 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetFormat(CAudioDeviceGraph *this, __int64 a2, struct tWAVEFORMATEX **a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  int v7; // ebx
  struct CPipeInstance *PipeInstance; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  const struct tWAVEFORMATEX *v11; // rax
  void (*v12)(void); // rax
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
  if ( v7 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x35u,
        (__int64)&WPP_58530928d9fd374fdb29ea4f3e815982_Traceguids,
        v7);
    }
    AudDGTraceLoggingErrorHelper("CAudioDeviceGraph::GetFormat", 1147, v7);
  }
  if ( v14 )
  {
    v12 = *(void (**)(void))(*(_QWORD *)v14 + 16LL);
    if ( (char *)v12 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release(v14);
    else
      v12();
  }
  return (unsigned int)v7;
}
