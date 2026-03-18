/*
 * XREFs of ?GetWeakReferenceBase@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@PEAPEAVCWeakReferenceBase@2@@Z @ 0x1C003EAC4
 * Callers:
 *     ?SetReferenceProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C003CAB0 (-SetReferenceProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 *     ?SetReferenceArrayProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C003D640 (-SetReferenceArrayProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 *     ?SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAV12@_NPEA_N@Z @ 0x1C0042B08 (-SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAV12@_N.c)
 *     ?SetRequestedPositionAnimation@CInteractionTrackerMarshaler@DirectComposition@@AEAAJPEAVCApplicationChannel@2@PEAVCBaseExpressionMarshaler@2@PEA_N@Z @ 0x1C00E977C (-SetRequestedPositionAnimation@CInteractionTrackerMarshaler@DirectComposition@@AEAAJPEAVCApplica.c)
 *     ?SetRequestedScaleAnimation@CInteractionTrackerMarshaler@DirectComposition@@AEAAJPEAVCApplicationChannel@2@PEAVCBaseExpressionMarshaler@2@PEA_N@Z @ 0x1C00E9830 (-SetRequestedScaleAnimation@CInteractionTrackerMarshaler@DirectComposition@@AEAAJPEAVCApplicatio.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C003A9C0 (Win32AllocPoolWithQuotaZInit.c)
 *     ?SafeAddRef@CWeakReferenceBase@DirectComposition@@AEAAKXZ @ 0x1C00E4AF8 (-SafeAddRef@CWeakReferenceBase@DirectComposition@@AEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::GetWeakReferenceBase(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CResourceMarshaler *a2,
        struct DirectComposition::CWeakReferenceBase **a3)
{
  unsigned int v3; // edi
  DirectComposition::CWeakReferenceBase *v7; // rbx
  PVOID v8; // rax
  DirectComposition::CWeakReferenceBase *v10; // rax
  struct DirectComposition::CResourceMarshaler *Buffer; // [rsp+20h] [rbp-18h] BYREF
  DirectComposition::CWeakReferenceBase *v12; // [rsp+28h] [rbp-10h]

  v3 = 0;
  if ( (*((_DWORD *)a2 + 4) & 4) != 0 )
  {
    Buffer = a2;
    v12 = 0LL;
    v7 = 0LL;
    v8 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 272), &Buffer);
    if ( v8 )
      v7 = (DirectComposition::CWeakReferenceBase *)*((_QWORD *)v8 + 1);
    if ( !DirectComposition::CWeakReferenceBase::SafeAddRef(v7) )
      return 3223191811LL;
  }
  else
  {
    v10 = (DirectComposition::CWeakReferenceBase *)Win32AllocPoolWithQuotaZInit(0x18uLL);
    v7 = v10;
    if ( v10 )
    {
      *((_QWORD *)v10 + 2) = a2;
      *((_DWORD *)v10 + 2) = 1;
    }
    else
    {
      v7 = 0LL;
    }
    if ( v7 )
    {
      Buffer = a2;
      v12 = v7;
      if ( RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 272), &Buffer, 0x10u, 0LL) )
      {
        *((_DWORD *)a2 + 4) |= 4u;
      }
      else
      {
        v3 = -1073741801;
        Win32FreePool();
        v7 = 0LL;
      }
    }
    else
    {
      v3 = -1073741801;
    }
  }
  *a3 = v7;
  return v3;
}
