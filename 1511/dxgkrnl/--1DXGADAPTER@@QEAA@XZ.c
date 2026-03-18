/*
 * XREFs of ??1DXGADAPTER@@QEAA@XZ @ 0x1C0124E68
 * Callers:
 *     ??_GDXGADAPTER@@QEAAPEAXI@Z @ 0x1C001E790 (--_GDXGADAPTER@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C000333C (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ??_GADAPTER_DISPLAY@@QEAAPEAXI@Z @ 0x1C0019618 (--_GADAPTER_DISPLAY@@QEAAPEAXI@Z.c)
 *     ??_GADAPTER_RENDER@@QEAAPEAXI@Z @ 0x1C0019638 (--_GADAPTER_RENDER@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C0129444 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 *     ??1DXGKSQM_ADAPTER@@QEAA@XZ @ 0x1C014FFD0 (--1DXGKSQM_ADAPTER@@QEAA@XZ.c)
 */

void __fastcall DXGADAPTER::~DXGADAPTER(void **this)
{
  ADAPTER_DISPLAY *v2; // rcx
  ADAPTER_RENDER *v3; // rcx
  void *v4; // rbx
  struct _ERESOURCE *v5; // rcx
  struct _ERESOURCE *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  __int64 i; // rsi
  unsigned int NumDifferentPhysicalAdapters; // eax
  void **v11; // rcx

  DXGADAPTER::Destroy((DXGADAPTER *)this);
  v2 = (ADAPTER_DISPLAY *)this[248];
  if ( v2 )
  {
    ADAPTER_DISPLAY::`scalar deleting destructor'(v2);
    this[248] = 0LL;
  }
  v3 = (ADAPTER_RENDER *)this[249];
  if ( v3 )
  {
    ADAPTER_RENDER::`scalar deleting destructor'(v3);
    this[249] = 0LL;
  }
  v4 = this[394];
  if ( v4 )
  {
    DXGKSQM_ADAPTER::~DXGKSQM_ADAPTER(v3);
    operator delete(v4);
    this[394] = 0LL;
  }
  v5 = (struct _ERESOURCE *)this[27];
  if ( v5 )
  {
    ExDeleteResourceLite(v5);
    operator delete(this[27]);
    this[27] = 0LL;
  }
  v6 = (struct _ERESOURCE *)this[16];
  if ( v6 )
  {
    ExDeleteResourceLite(v6);
    operator delete(this[16]);
    this[16] = 0LL;
  }
  v7 = this[253];
  if ( v7 )
  {
    operator delete(v7);
    this[253] = 0LL;
  }
  v8 = this[366];
  if ( v8 )
    operator delete(v8);
  if ( this[238] )
  {
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters((DXGADAPTER *)this);
      v11 = (void **)this[238];
      if ( (unsigned int)i >= NumDifferentPhysicalAdapters )
        break;
      operator delete(v11[6 * i + 3]);
      operator delete(*((void **)this[238] + 6 * i + 4));
      *((_QWORD *)this[238] + 6 * i + 3) = 0LL;
      *((_QWORD *)this[238] + 6 * i + 4) = 0LL;
    }
    operator delete(v11);
    this[238] = 0LL;
  }
  this[2] = 0LL;
}
