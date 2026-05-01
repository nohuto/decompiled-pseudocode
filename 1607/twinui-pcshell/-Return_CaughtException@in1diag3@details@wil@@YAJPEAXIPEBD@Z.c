/*
 * XREFs of ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180009198
 * Callers:
 *     _TaskbarLayoutPolicyManager::RuntimeClassInitialize_::_1_::catch$0 @ 0x1800306B7 (_TaskbarLayoutPolicyManager--RuntimeClassInitialize_--_1_--catch$0.c)
 *     _TaskbarLayoutPolicyManager::ValidateDefaultLayoutXML_::_1_::catch$0 @ 0x18003087C (_TaskbarLayoutPolicyManager--ValidateDefaultLayoutXML_--_1_--catch$0.c)
 *     _TaskbarLayoutPolicyManager::ValidateLayoutModificationXML_::_1_::catch$0 @ 0x1800308C1 (_TaskbarLayoutPolicyManager--ValidateLayoutModificationXML_--_1_--catch$0.c)
 *     _TaskbarLayoutParser::RuntimeClassInitialize_::_1_::catch$0 @ 0x180030AF6 (_TaskbarLayoutParser--RuntimeClassInitialize_--_1_--catch$0.c)
 *     _TaskbarLayoutParser::ParseTaskbarLayoutCollectionNode_::_1_::catch$0 @ 0x180030B5F (_TaskbarLayoutParser--ParseTaskbarLayoutCollectionNode_--_1_--catch$0.c)
 * Callees:
 *     ?ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions@2@@Z @ 0x180009134 (-ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return wil::details::ReportFailure_CaughtException((__int64)this, (unsigned int)a2, a3, (__int64)a4, v5, retaddr);
}
