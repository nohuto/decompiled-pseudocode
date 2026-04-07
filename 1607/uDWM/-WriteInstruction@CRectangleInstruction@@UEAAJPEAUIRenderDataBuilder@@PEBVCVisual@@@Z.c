/*
 * XREFs of ?WriteInstruction@CRectangleInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z @ 0x180039770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRectangleInstruction::WriteInstruction(
        CRectangleInstruction *this,
        struct IRenderDataBuilder *a2,
        const struct CVisual *a3)
{
  __int64 v3; // rax
  __int64 v4; // r8

  v3 = *((_QWORD *)this + 2);
  v4 = 0LL;
  if ( v3 )
    v4 = *(unsigned int *)(v3 + 24);
  return (*(__int64 (__fastcall **)(struct IRenderDataBuilder *, char *, __int64))(*(_QWORD *)a2 + 64LL))(
           a2,
           (char *)this + 24,
           v4);
}
