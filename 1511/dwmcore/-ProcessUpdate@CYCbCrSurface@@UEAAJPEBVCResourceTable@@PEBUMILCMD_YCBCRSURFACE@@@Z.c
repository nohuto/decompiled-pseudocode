/*
 * XREFs of ?ProcessUpdate@CYCbCrSurface@@UEAAJPEBVCResourceTable@@PEBUMILCMD_YCBCRSURFACE@@@Z @ 0x1800F4F40
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180085898 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008596C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180094250 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CYCbCrSurface::ProcessUpdate(
        struct CResource **this,
        const struct CResourceTable *a2,
        const struct MILCMD_YCBCRSURFACE *a3)
{
  int v6; // ebp
  char v7; // r12
  char v8; // r15
  struct CResource *Resource; // r14
  __int64 v10; // rax
  int v11; // edi
  struct CResource *v12; // rbx
  int v13; // eax
  int v14; // eax

  v6 = 0;
  v7 = 0;
  v8 = 0;
  Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0x57u);
  v10 = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 3), 0x57u);
  v11 = *((_DWORD *)a3 + 4);
  v12 = (struct CResource *)v10;
  if ( (Resource == 0LL) != (v10 == 0) )
  {
    v6 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x1Eu);
    return (unsigned int)v6;
  }
  if ( Resource != this[5] )
  {
    v13 = CResource::RegisterNotifier((CResource *)this, Resource);
    v6 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x23u);
      goto LABEL_17;
    }
    v7 = 1;
  }
  if ( v12 == this[6] )
  {
LABEL_12:
    if ( v7 )
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[5]);
      this[5] = Resource;
    }
    if ( v8 )
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[6]);
      this[6] = v12;
    }
    *((_DWORD *)this + 14) = v11;
    goto LABEL_17;
  }
  v14 = CResource::RegisterNotifier((CResource *)this, v12);
  v6 = v14;
  if ( v14 >= 0 )
  {
    v8 = 1;
    goto LABEL_12;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x29u);
LABEL_17:
  if ( v6 < 0 )
  {
    if ( v7 )
      CResource::UnRegisterNotifierInternal((CResource *)this, Resource);
    if ( v8 )
      CResource::UnRegisterNotifierInternal((CResource *)this, v12);
  }
  return (unsigned int)v6;
}
