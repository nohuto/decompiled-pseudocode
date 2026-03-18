/*
 * XREFs of ?SynchronizeValidAdapters@CD3DDeviceTable@@QEAAXPEAVCDXGIEnumeration@@@Z @ 0x180091B48
 * Callers:
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@_N@Z @ 0x1800545A4 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateCompari.c)
 * Callees:
 *     ?RemoveDeviceFromTable@CD3DDeviceTable@@QEAAHPEAUID3D11Device1@@@Z @ 0x18008BB7C (-RemoveDeviceFromTable@CD3DDeviceTable@@QEAAHPEAUID3D11Device1@@@Z.c)
 *     ?DestroyResources@CD3DDeviceTable@@QEAAXXZ @ 0x180123260 (-DestroyResources@CD3DDeviceTable@@QEAAXXZ.c)
 */

void __fastcall CD3DDeviceTable::SynchronizeValidAdapters(CD3DDeviceTable *this, struct CDXGIEnumeration *a2)
{
  __int64 v2; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = 0LL;
  if ( a2 )
  {
    if ( *((_DWORD *)this + 10) )
    {
      do
      {
        v5 = 0LL;
        v6 = *(_QWORD *)(304LL * (unsigned int)v2 + *((_QWORD *)this + 2) + 296);
        if ( *((_DWORD *)a2 + 22) )
        {
          while ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 8) + 8 * v5) + 336LL) != v6 )
          {
            v5 = (unsigned int)(v5 + 1);
            if ( (unsigned int)v5 >= *((_DWORD *)a2 + 22) )
              goto LABEL_12;
          }
          v2 = (unsigned int)(v2 + 1);
        }
        else
        {
LABEL_12:
          CD3DDeviceTable::RemoveDeviceFromTable(this, *(struct ID3D11Device1 **)(*((_QWORD *)this + 10) + 8 * v2));
        }
      }
      while ( (unsigned int)v2 < *((_DWORD *)this + 10) );
    }
  }
  else
  {
    CD3DDeviceTable::DestroyResources(this);
  }
}
