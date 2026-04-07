/*
 * XREFs of ?WriteInstruction@CDrawTileImageInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z @ 0x180015370
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawTileImageInstruction::WriteInstruction(
        CDrawTileImageInstruction *this,
        struct IRenderDataBuilder *a2,
        const struct CVisual *a3)
{
  __int64 i; // rcx
  _DWORD v6[8]; // [rsp+38h] [rbp-20h] BYREF

  for ( i = 0LL; i < 4; ++i )
    *(float *)&v6[i] = (float)*(int *)((char *)&v6[i + 4] + this - (CDrawTileImageInstruction *)v6);
  return (*(__int64 (__fastcall **)(struct IRenderDataBuilder *, _QWORD, _DWORD *))(*(_QWORD *)a2 + 80LL))(
           a2,
           *(unsigned int *)(*((_QWORD *)this + 6) + 24LL),
           v6);
}
