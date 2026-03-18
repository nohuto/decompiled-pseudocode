/*
 * XREFs of ?ActivateStoringInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJH@Z @ 0x1C0125260
 * Callers:
 *     DxgkEscape @ 0x1C007AB10 (DxgkEscape.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0006F38 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::ActivateStoringInvalidModesForTestPurposes(ADAPTER_DISPLAY *this, int a2)
{
  __int64 v4; // rcx
  unsigned int v5; // esi
  __int64 v6; // rax
  SIZE_T v7; // rax
  PVOID v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  unsigned int i; // ebx
  void *v14; // rcx
  _BYTE v16[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, (ADAPTER_DISPLAY *)((char *)this + 160));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
  v5 = 0;
  if ( a2 )
  {
    if ( *((_QWORD *)this + 28) )
    {
      v6 = WdLogNewEntry5_WdError(v4);
      *(_QWORD *)(v6 + 24) = 26646LL;
      WdLogEvent5_WdError(v6);
      v5 = -1073740008;
    }
    else
    {
      v7 = 24LL * *((unsigned int *)this + 26);
      if ( !is_mul_ok(*((unsigned int *)this + 26), 0x18uLL) )
        v7 = -1LL;
      v8 = operator new[](v7, 0x4B677844u, PagedPool);
      *((_QWORD *)this + 28) = v8;
      if ( v8 )
      {
        memset(v8, 0, 24LL * *((unsigned int *)this + 26));
      }
      else
      {
        v12 = WdLogNewEntry5_WdLowResource(0LL, v9, v10, v11);
        *(_QWORD *)(v12 + 24) = this;
        WdLogEvent5_WdLowResource(v12);
        v5 = -1073741801;
      }
    }
  }
  else if ( *((_QWORD *)this + 28) )
  {
    for ( i = 0; i < *((_DWORD *)this + 26); ++i )
    {
      v14 = *(void **)(*((_QWORD *)this + 28) + 24LL * i + 8);
      if ( v14 )
      {
        operator delete(v14);
        *(_QWORD *)(*((_QWORD *)this + 28) + 24LL * i + 8) = 0LL;
      }
    }
    operator delete(*((void **)this + 28));
    *((_QWORD *)this + 28) = 0LL;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v16);
  return v5;
}
