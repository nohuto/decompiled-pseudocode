/*
 * XREFs of ?FxIFRCreateSnapshot@@YAPEAU_WDF_IFR_HEADER@@PEBDPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0071F44
 * Callers:
 *     ?FxIFRReplay@@YAX_K@Z @ 0x1C00722C8 (-FxIFRReplay@@YAX_K@Z.c)
 * Callees:
 *     WPP_IFR_SF_ @ 0x1C0019F44 (WPP_IFR_SF_.c)
 *     memmove @ 0x1C0040140 (memmove.c)
 *     ?FxIFRStop@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0070634 (-FxIFRStop@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxIFRValidateLogHeader@@YAJPEAU_WDF_IFR_HEADER@@@Z @ 0x1C0072800 (-FxIFRValidateLogHeader@@YAJPEAU_WDF_IFR_HEADER@@@Z.c)
 *     WPP_IFR_SF_ds @ 0x1C00728BC (WPP_IFR_SF_ds.c)
 *     WPP_IFR_SF_s @ 0x1C00729F0 (WPP_IFR_SF_s.c)
 */

_WDF_IFR_HEADER *__fastcall FxIFRCreateSnapshot(const char *DriverName, _FX_DRIVER_GLOBALS *FxGlobalsForTracing)
{
  _WDF_IFR_HEADER *v3; // rsi
  int v4; // edi
  KIRQL v6; // al
  unsigned int v7; // r8d
  _LIST_ENTRY *Flink; // rbx
  KIRQL v9; // r15
  unsigned __int8 v10; // dl
  unsigned int v11; // r8d
  unsigned __int16 v12; // r9
  signed __int32 v14; // eax
  bool v15; // zf
  signed __int32 v16; // edx
  SIZE_T v17; // rdx
  unsigned int Blink; // ecx
  unsigned int v19; // eax
  size_t v20; // rdi
  _WDF_IFR_HEADER *PoolWithTag; // rax
  const _GUID *traceGuid; // [rsp+20h] [rbp-38h]

  v3 = 0LL;
  v4 = 0;
  v6 = KeAcquireSpinLockRaiseToDpc(&FxLibraryGlobals.FxDriverGlobalsListLock.m_Lock);
  Flink = FxLibraryGlobals.FxDriverGlobalsList.Flink;
  v9 = v6;
  while ( 1 )
  {
    if ( Flink == &FxLibraryGlobals.FxDriverGlobalsList )
    {
      WPP_IFR_SF_s(FxGlobalsForTracing, 3u, v7, 0xAu, traceGuid, DriverName);
      WPP_IFR_SF_(FxGlobalsForTracing, 3u, 0x16u, 0xBu, WPP_TracingIfrReplay_cpp_Traceguids);
      goto LABEL_6;
    }
    if ( !_stricmp((const char *)&Flink[28], DriverName) )
      break;
    Flink = Flink->Flink;
  }
  if ( Flink[6].Flink )
  {
    v14 = (signed __int32)Flink[25].Flink;
    while ( 1 )
    {
      v15 = v14 == 0;
      if ( v14 <= 0 )
        break;
      v16 = v14;
      v14 = _InterlockedCompareExchange((volatile signed __int32 *)&Flink[25], v14 + 1, v14);
      if ( v16 == v14 )
      {
        v15 = v16 == -1;
        break;
      }
    }
    if ( !v15 )
    {
      v17 = 0xFFFFFFFFLL;
      Blink = (unsigned int)Flink[6].Flink[1].Blink;
      v19 = Blink + 72;
      if ( Blink + 72 >= Blink )
        v17 = v19;
      v4 = v19 < Blink ? 0xC0000095 : 0;
      if ( v19 >= Blink )
      {
        if ( (unsigned int)(v17 - 4096) > 0xF000 )
        {
          v4 = -1073741306;
        }
        else
        {
          v20 = (unsigned int)v17;
          PoolWithTag = (_WDF_IFR_HEADER *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v17, 0x674C7846u);
          v3 = PoolWithTag;
          if ( PoolWithTag )
          {
            memmove(PoolWithTag, Flink[6].Flink, v20);
            v3->Base = (unsigned __int8 *)&v3[1];
            v4 = FxIFRValidateLogHeader(v3);
            if ( v4 < 0 )
            {
              ExFreePoolWithTag(v3, 0x674C7846u);
              v3 = 0LL;
            }
          }
          else
          {
            v4 = -1073741670;
          }
        }
      }
      FxIFRStop((_FX_DRIVER_GLOBALS *)Flink);
    }
  }
  else
  {
    WPP_IFR_SF_s(FxGlobalsForTracing, 3u, v7, 0xCu, traceGuid, DriverName);
  }
LABEL_6:
  KeReleaseSpinLock(&FxLibraryGlobals.FxDriverGlobalsListLock.m_Lock, v9);
  if ( v4 < 0 )
    WPP_IFR_SF_ds(FxGlobalsForTracing, v10, v11, v12, traceGuid, v4, DriverName);
  return v3;
}
