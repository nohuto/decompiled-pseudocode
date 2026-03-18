/*
 * XREFs of ?UpdatePresentStats@BLTQUEUE@@AEAAXPEAVBLTENTRY@@PEAU__BLTWAITINFO@1@@Z @ 0x1C015FCA0
 * Callers:
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C00BFA8C (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001BC8 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00035C0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     Template_dddi @ 0x1C0021BF8 (Template_dddi.c)
 *     Template_qiii @ 0x1C0021E94 (Template_qiii.c)
 *     ?SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z @ 0x1C0167398 (-SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z.c)
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
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp-49h] BYREF
  struct BLTQUEUE::__BLTWAITINFO *v26; // [rsp+48h] [rbp-41h]
  struct _D3DKMT_GETSETSWAPCHAINMETADATA v27; // [rsp+50h] [rbp-39h] BYREF
  _BYTE v28[8]; // [rsp+78h] [rbp-11h] BYREF
  DXGPUSHLOCK *v29; // [rsp+80h] [rbp-9h]
  int v30; // [rsp+88h] [rbp-1h]
  _QWORD v31[2]; // [rsp+90h] [rbp+7h] BYREF

  v26 = a3;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v28, this + 19);
  v5 = v29;
  DXGPUSHLOCK::AcquireExclusive(v29);
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
  v30 = 0;
  ExReleasePushLockExclusiveEx(v5, 0LL);
  KeLeaveCriticalRegion();
  v16 = (struct _KMUTANT *)this[299];
  KeWaitForSingleObject(v16, Executive, 0, 0, 0LL);
  v18 = (struct DXGSWAPCHAIN **)this[298];
  if ( v18 )
  {
    if ( (*((_DWORD *)a2 + 16) & 8) == 0 )
    {
      v31[0] = 0LL;
      v31[1] = 0LL;
      memset(&v27, 0, sizeof(v27));
      v19 = *v18;
      v27.bSetMetaData = 0;
      v27.bGlobalMetaData = 1;
      v27.bProducer = 1;
      v27.BufferSize = 16;
      v27.pBuffer = v31;
      if ( (int)SwapChainGetSetMetaDataInternal(v19, &v27, 0, 0) >= 0 && v27.DataCopied == 16 )
      {
        v20 = HIDWORD(v31[0]);
        if ( HIDWORD(v31[0]) )
        {
          *((_BYTE *)this + 96) = 1;
          if ( v9.QuadPart - *((_QWORD *)a2 + 67) > PerformanceFrequency.QuadPart / 10 )
          {
            v22 = WdLogNewEntry5_WdAssertion(v20);
            *(_QWORD *)(v22 + 24) = v14;
            *(_QWORD *)(v22 + 32) = HIDWORD(v31[0]);
            WdLogEvent5_WdAssertion(v22);
          }
          else if ( (unsigned int)v20 < (unsigned int)v14
                 || (v21 = *((unsigned int *)a2 + 17), (_DWORD)v21) && v21 > (__int64)this[23] )
          {
            LODWORD(v14) = *((_DWORD *)this + 16);
            v15 = *((_DWORD *)this + 17);
            *(_DWORD *)v26 |= 2u;
          }
        }
      }
    }
  }
  v13 = bTracingEnabled == 0;
  v23 = (__int64)this[24];
  v24 = *((unsigned int *)this + 46);
  this[10] = (struct _KTHREAD *)v23;
  *((_DWORD *)this + 16) = v14;
  *((_DWORD *)this + 17) = v15;
  *((_DWORD *)this + 18) = v24;
  if ( !v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    Template_dddi(v24, v23, v17, v14, v15, v24, v23);
  KeReleaseMutex(v16, 0);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v28);
}
