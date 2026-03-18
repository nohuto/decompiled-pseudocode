/*
 * XREFs of DeleteHrgnClip @ 0x1401E2400
 * Callers:
 *     ?ClearDce@@YAXPEAUtagDCE@@@Z @ 0x1401D8F48 (-ClearDce@@YAXPEAUtagDCE@@@Z.c)
 * Callees:
 *     RevalidateDCE @ 0x1400137B0 (RevalidateDCE.c)
 */

__int64 __fastcall DeleteHrgnClip(__int64 a1)
{
  unsigned int v2; // eax
  __int64 v3; // rdx
  unsigned __int64 v4; // rcx
  __int64 result; // rax
  bool v6; // zf
  __int64 v7; // rdx
  __int64 v8; // rcx

  v2 = *(_DWORD *)(a1 + 48) & 0xFFFFFF3F;
  v3 = *(_DWORD *)(a1 + 48) & 0xC0;
  *(_DWORD *)(a1 + 48) = v2;
  if ( (v2 & 0x40000) != 0 )
  {
    *(_DWORD *)(a1 + 48) = v2 & 0xFFFBFFFF;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 24);
    if ( v4 > 2 && (_DWORD)v3 )
    {
      LOBYTE(v3) = 4;
      GreDereferenceObject(v4, v3, 0LL);
    }
    else
    {
      DeleteMaybeSpecialRgn(v4);
    }
  }
  result = DeleteMaybeSpecialRgn(*(_QWORD *)(a1 + 32));
  v6 = (*(_DWORD *)(a1 + 48) & 0x2000) == 0;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( v6 )
  {
    v7 = *(_QWORD *)(a1 + 40);
    if ( !v7 )
      return result;
    result = GreSelectVisRgn(*(_QWORD *)(a1 + 16), v7, 1LL);
    goto LABEL_8;
  }
  result = RevalidateDCE(a1);
  v8 = *(_QWORD *)(a1 + 40);
  if ( v8 )
  {
    result = GreDeleteObject(v8);
LABEL_8:
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  return result;
}
