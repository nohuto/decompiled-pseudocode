/*
 * XREFs of ?_ReallocString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@G@Z @ 0x1C0062A50
 * Callers:
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x1C0062004 (--0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z.c)
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x1C00620B8 (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ?_CopyString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@AEBU2@@Z @ 0x1C0062168 (-_CopyString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@AEBU2@@Z.c)
 * Callees:
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall CCD_SET_STRING_ID::_ReallocString(struct _STRING *a1, USHORT a2)
{
  __int64 v4; // rsi
  CHAR *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  CHAR *v10; // rbp
  __int64 v12; // rax

  if ( a2 <= a1->MaximumLength )
    return 0LL;
  v4 = a2;
  v5 = (CHAR *)operator new[](a2, 0x63644356u, PagedPool);
  v10 = v5;
  if ( v5 )
  {
    memmove(v5, a1->Buffer, a1->Length);
    operator delete(a1->Buffer);
    a1->Buffer = v10;
    a1->MaximumLength = a2;
    return 0LL;
  }
  v12 = WdLogNewEntry5_WdLowResource(v7, v6, v8, v9);
  *(_QWORD *)(v12 + 24) = v4;
  WdLogEvent5_WdLowResource(v12);
  return 3221225495LL;
}
