/*
 * XREFs of ?HrFindInterface@CRenderTargetBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180132830
 * Callers:
 *     <none>
 * Callees:
 *     ??8@YA_NAEBU_GUID@@0@Z @ 0x1800A19A0 (--8@YA_NAEBU_GUID@@0@Z.c)
 */

__int64 __fastcall CRenderTargetBitmap::HrFindInterface(CRenderTargetBitmap *this, struct _GUID *a2, void **a3)
{
  __int64 result; // rax
  _QWORD *v4; // rcx
  __int64 v5; // r9
  _QWORD *v6; // r10
  __int64 v7; // r9
  __int64 v8; // r9

  result = 2147942487LL;
  if ( a3 )
  {
    if ( operator==(a2, &GUID_db178a3c_d733_4570_9513_5392d717955f) )
    {
      if ( v5 )
      {
        v7 = v5 + 112;
LABEL_9:
        *v6 = v7;
        return 0LL;
      }
      goto LABEL_8;
    }
    if ( operator==(v4, &GUID_475af409_d8b1_4ca5_8177_4562f6260b68) )
    {
      if ( v8 )
      {
        v7 = v8 + 120;
        goto LABEL_9;
      }
LABEL_8:
      v7 = 0LL;
      goto LABEL_9;
    }
    return 2147500034LL;
  }
  return result;
}
