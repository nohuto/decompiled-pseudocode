/*
 * XREFs of MulDestroyBrushInternal @ 0x140220720
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyTable@MULTIBRUSH@@QEAAXXZ @ 0x140220784 (-DestroyTable@MULTIBRUSH@@QEAAXXZ.c)
 */

void __fastcall MulDestroyBrushInternal(__int64 a1)
{
  _DWORD v1[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v2; // [rsp+28h] [rbp-48h]
  __int64 v3; // [rsp+30h] [rbp-40h]
  _DWORD v4[2]; // [rsp+38h] [rbp-38h] BYREF
  _DWORD *v5; // [rsp+40h] [rbp-30h]
  __int64 v6; // [rsp+48h] [rbp-28h]
  void *v7; // [rsp+50h] [rbp-20h]
  __int64 v8; // [rsp+58h] [rbp-18h]
  __int64 v9; // [rsp+60h] [rbp-10h]
  void *retaddr; // [rsp+78h] [rbp+8h]

  if ( a1 )
  {
    v2 = a1;
    v8 = a1;
    v1[1] = 0;
    v5 = v1;
    v7 = retaddr;
    v3 = 0LL;
    v1[0] = -1;
    v4[0] = 1;
    v6 = 0LL;
    v4[1] = -1;
    v9 = -1LL;
    MULTIBRUSH::DestroyTable((MULTIBRUSH *)v4);
  }
}
