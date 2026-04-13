/*
 * XREFs of ?get_ExtendedJsonContent@ContentItemImpl@TargetedContent@ContentManagement@@UEAAJPEAPEAUIJsonObject@Json@Data@Windows@@@Z @ 0x180049AB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ContentManagement::TargetedContent::ContentItemImpl::get_ExtendedJsonContent(
        ContentManagement::TargetedContent::ContentItemImpl *this,
        struct Windows::Data::Json::IJsonObject **a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 8);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  *a2 = (struct Windows::Data::Json::IJsonObject *)*((_QWORD *)this + 8);
  return 0LL;
}
