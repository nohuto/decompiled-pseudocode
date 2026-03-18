/*
 * XREFs of ACPIGetUniqueId @ 0x1C007B790
 * Callers:
 *     <none>
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C0001750 (AMLIEvalNameSpaceObject.c)
 *     AMLIFreeDataBuffs @ 0x1C0004D14 (AMLIFreeDataBuffs.c)
 *     AMLIDereferenceHandleEx @ 0x1C000C960 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C000D460 (AMLIGetNamedChild.c)
 *     memmove @ 0x1C0023800 (memmove.c)
 */

__int64 __fastcall ACPIGetUniqueId(__int64 a1, _QWORD *a2)
{
  __int64 *v3; // rax
  volatile signed __int32 *v4; // rsi
  int v6; // ebx
  _BYTE v7[2]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v8; // [rsp+22h] [rbp-36h]
  __int64 v9; // [rsp+30h] [rbp-28h]
  int v10; // [rsp+38h] [rbp-20h]
  void *Src; // [rsp+40h] [rbp-18h]

  *a2 = 0LL;
  v3 = (__int64 *)AMLIGetNamedChild(*(_QWORD *)(a1 + 704), 1145656671);
  v4 = (volatile signed __int32 *)v3;
  if ( !v3 )
    return 3221226021LL;
  v6 = AMLIEvalNameSpaceObject(v3, v7, 0, 0LL);
  AMLIDereferenceHandleEx(v4);
  if ( v6 >= 0 )
  {
    if ( v8 == 1 )
    {
      *a2 = v9;
    }
    else if ( v8 == 2 && (unsigned int)(v10 - 1) <= 8 )
    {
      memmove(a2, Src, (unsigned int)(v10 - 1));
    }
    else
    {
      v6 = -1073741811;
    }
    AMLIFreeDataBuffs((__int64)v7);
  }
  return (unsigned int)v6;
}
