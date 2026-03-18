/*
 * XREFs of ?ProcessSetMask@CDropShadow@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DROPSHADOW_SETMASK@@@Z @ 0x18010A290
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18003ABA0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18008DFE0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008E09C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?EnsureContentInitialized@CDropShadow@@AEAAJXZ @ 0x18014F5B0 (-EnsureContentInitialized@CDropShadow@@AEAAJXZ.c)
 *     ?InvalidateShadow@CDropShadow@@AEAAX_N@Z @ 0x18014FA54 (-InvalidateShadow@CDropShadow@@AEAAX_N@Z.c)
 */

__int64 __fastcall CDropShadow::ProcessSetMask(
        CResource **this,
        struct CResourceTable *a2,
        const struct MILCMD_DROPSHADOW_SETMASK *a3)
{
  struct CResource *Resource; // rsi
  unsigned int v5; // edx
  int v7; // ebx
  int v8; // r9d
  int v9; // eax
  struct CResource **v10; // rdi
  int v11; // eax
  unsigned int v13; // [rsp+20h] [rbp-18h]

  Resource = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  if ( v5 )
  {
    Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v5, 0x4Du);
    if ( !Resource )
    {
      v7 = -2003303421;
      v13 = 189;
LABEL_4:
      v8 = v7;
LABEL_14:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, v13);
      return (unsigned int)v7;
    }
  }
  v9 = CDropShadow::EnsureContentInitialized((CDropShadow *)this);
  v7 = v9;
  if ( v9 < 0 )
  {
    v13 = 193;
    v8 = v9;
    goto LABEL_14;
  }
  v10 = (struct CResource **)this[24];
  if ( Resource != v10[16] )
  {
    v11 = CResource::RegisterNotifier(this[24], Resource);
    v7 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x1Fu);
    }
    else
    {
      CResource::UnRegisterNotifierInternal((CResource *)v10, v10[16]);
      v10[16] = Resource;
    }
    if ( v7 < 0 )
    {
      v13 = 197;
      goto LABEL_4;
    }
    CDropShadow::InvalidateShadow((CDropShadow *)this, 1);
  }
  return (unsigned int)v7;
}
