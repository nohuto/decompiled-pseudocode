/*
 * XREFs of ?QueryInterface@CHwBitmapColorSource@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18013D710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwBitmapColorSource::QueryInterface(CHwBitmapColorSource *this, const struct _GUID *a2, void **a3)
{
  unsigned int v4; // ecx
  __int64 v5; // rax
  __int64 v6; // rax

  v4 = -2147024809;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data4;
    if ( !v5 )
      goto LABEL_8;
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&IID_IUnknown.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&IID_IUnknown.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)IID_IUnknown.Data4;
    if ( v6 )
    {
      *a3 = 0LL;
    }
    else
    {
LABEL_8:
      *a3 = (void *)((unsigned __int64)this & -(__int64)(this != (CHwBitmapColorSource *)104));
      v4 = 0;
      _InterlockedIncrement((volatile signed __int32 *)this - 24);
    }
  }
  return v4;
}
