/*
 * XREFs of ?UpdatePresentStats@BLTQUEUE@@AEAAXPEAVBLTENTRY@@PEAU__BLTWAITINFO@1@@Z @ 0x1C015B9AC
 * Callers:
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C00AD7D0 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B60 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002E50 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     Template_dddi @ 0x1C0021D04 (Template_dddi.c)
 *     Template_qiii @ 0x1C0021FA0 (Template_qiii.c)
 *     ?SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z @ 0x1C0162E68 (-SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z.c)
 */

void __fastcall BLTQUEUE::UpdatePresentStats(
        struct _KTHREAD **this,
        struct BLTENTRY *a2,
        struct BLTQUEUE::__BLTWAITINFO *a3)
{
  DXGPUSHLOCK *v5; // rbx
  LARGE_INTEGER v6; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  LARGE_INTEGER v9; // rdi
  LONGLONG v10; // r9
  LONGLONG v11; // rax
  LONGLONG v12; // rdx
  bool v13; // zf
  __int64 v14; // r14
  int v15; // r15d
  struct _KMUTANT *v16; // rbx
  __int64 v17; // r8
  struct DXGSWAPCHAIN **v18; // r12
  struct DXGSWAPCHAIN *v19; // rcx
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp-49h] BYREF
  struct BLTQUEUE::__BLTWAITINFO *v27; // [rsp+48h] [rbp-41h]
  struct _D3DKMT_GETSETSWAPCHAINMETADATA v28; // [rsp+50h] [rbp-39h] BYREF
  _BYTE v29[8]; // [rsp+78h] [rbp-11h] BYREF
  DXGPUSHLOCK *v30; // [rsp+80h] [rbp-9h]
  int v31; // [rsp+88h] [rbp-1h]
  _QWORD v32[2]; // [rsp+90h] [rbp+7h] BYREF

  v27 = a3;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v29, this + 19);
  v5 = v30;
  DXGPUSHLOCK::AcquireExclusive(v30);
  v6 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v7 = *((unsigned int *)this + 28);
  v8 = *((unsigned int *)this + 29);
  v9 = v6;
  v10 = v6.QuadPart * v7 / v8 / PerformanceFrequency.QuadPart;
  this[23] = (struct _KTHREAD *)v10;
  v11 = PerformanceFrequency.QuadPart * v8 * (unsigned int)v10 / v7;
  v12 = PerformanceFrequency.QuadPart * v8 * (unsigned int)v10 % v7;
  v13 = bTracingEnabled == 0;
  this[24] = (struct _KTHREAD *)v11;
  if ( !v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    Template_qiii((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, v12, v7, 1, v10, (char)this[22], v11);
  v14 = *((unsigned int *)a2 + 15);
  v15 = *((_DWORD *)this + 46);
  *((_QWORD *)v5 + 1) = 0LL;
  v31 = 0;
  ExReleasePushLockExclusiveEx(v5, 0LL);
  KeLeaveCriticalRegion();
  v16 = (struct _KMUTANT *)this[296];
  KeWaitForSingleObject(v16, Executive, 0, 0, 0LL);
  v18 = (struct DXGSWAPCHAIN **)this[295];
  if ( v18 )
  {
    if ( (*((_DWORD *)a2 + 16) & 8) == 0 )
    {
      v32[0] = 0LL;
      v32[1] = 0LL;
      memset(&v28, 0, sizeof(v28));
      v19 = *v18;
      v28.bSetMetaData = 0;
      v28.bGlobalMetaData = 1;
      v28.bProducer = 1;
      v28.BufferSize = 16;
      v28.pBuffer = v32;
      if ( (int)SwapChainGetSetMetaDataInternal(v19, &v28, 0, 0) >= 0 && v28.DataCopied == 16 )
      {
        v21 = HIDWORD(v32[0]);
        if ( HIDWORD(v32[0]) )
        {
          *((_BYTE *)this + 96) = 1;
          if ( v9.QuadPart - *((_QWORD *)a2 + 67) > PerformanceFrequency.QuadPart / 10 )
          {
            v23 = WdLogNewEntry5_WdAssertion(v21, PerformanceFrequency.QuadPart / 10, v17, v20);
            *(_QWORD *)(v23 + 24) = v14;
            *(_QWORD *)(v23 + 32) = HIDWORD(v32[0]);
            WdLogEvent5_WdAssertion(v23);
          }
          else if ( (unsigned int)v21 < (unsigned int)v14
                 || (v22 = *((unsigned int *)a2 + 17), (_DWORD)v22) && v22 > (__int64)this[23] )
          {
            LODWORD(v14) = *((_DWORD *)this + 16);
            v15 = *((_DWORD *)this + 17);
            *(_DWORD *)v27 |= 2u;
          }
        }
      }
    }
  }
  v13 = bTracingEnabled == 0;
  v24 = (__int64)this[24];
  v25 = *((unsigned int *)this + 46);
  this[10] = (struct _KTHREAD *)v24;
  *((_DWORD *)this + 16) = v14;
  *((_DWORD *)this + 17) = v15;
  *((_DWORD *)this + 18) = v25;
  if ( !v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    Template_dddi(v25, v24, v17, v14, v15, v25, v24);
  KeReleaseMutex(v16, 0);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v29);
}
