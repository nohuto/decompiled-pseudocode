/*
 * XREFs of ??1DXGADAPTER@@QEAA@XZ @ 0x1C0144CEC
 * Callers:
 *     ??_GDXGADAPTER@@QEAAPEAXI@Z @ 0x1C0025510 (--_GDXGADAPTER@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C0008728 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ??_GADAPTER_DISPLAY@@QEAAPEAXI@Z @ 0x1C001D754 (--_GADAPTER_DISPLAY@@QEAAPEAXI@Z.c)
 *     ??_GADAPTER_RENDER@@QEAAPEAXI@Z @ 0x1C001D774 (--_GADAPTER_RENDER@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C01451AC (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::~DXGADAPTER(void **this)
{
  ADAPTER_DISPLAY *v2; // rcx
  ADAPTER_RENDER *v3; // rcx
  struct _ERESOURCE *v4; // rcx
  struct _ERESOURCE *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  __int64 i; // rsi
  unsigned int NumDifferentPhysicalAdapters; // eax
  void **v10; // rcx

  DXGADAPTER::Destroy((DXGADAPTER *)this);
  v2 = (ADAPTER_DISPLAY *)this[266];
  if ( v2 )
  {
    ADAPTER_DISPLAY::`scalar deleting destructor'(v2);
    this[266] = 0LL;
  }
  v3 = (ADAPTER_RENDER *)this[267];
  if ( v3 )
  {
    ADAPTER_RENDER::`scalar deleting destructor'(v3);
    this[267] = 0LL;
  }
  v4 = (struct _ERESOURCE *)this[29];
  if ( v4 )
  {
    ExDeleteResourceLite(v4);
    operator delete(this[29]);
    this[29] = 0LL;
  }
  v5 = (struct _ERESOURCE *)this[18];
  if ( v5 )
  {
    ExDeleteResourceLite(v5);
    operator delete(this[18]);
    this[18] = 0LL;
  }
  v6 = this[271];
  if ( v6 )
  {
    operator delete(v6);
    this[271] = 0LL;
  }
  v7 = this[434];
  if ( v7 )
    operator delete(v7);
  if ( this[255] )
  {
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters((DXGADAPTER *)this);
      v10 = (void **)this[255];
      if ( (unsigned int)i >= NumDifferentPhysicalAdapters )
        break;
      operator delete(v10[6 * i + 3]);
      operator delete(*((void **)this[255] + 6 * i + 4));
      *((_QWORD *)this[255] + 6 * i + 3) = 0LL;
      *((_QWORD *)this[255] + 6 * i + 4) = 0LL;
    }
    operator delete(v10);
    this[255] = 0LL;
  }
  this[2] = 0LL;
}
