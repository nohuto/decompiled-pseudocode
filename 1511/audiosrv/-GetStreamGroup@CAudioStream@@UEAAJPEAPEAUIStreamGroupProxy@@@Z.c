/*
 * XREFs of ?GetStreamGroup@CAudioStream@@UEAAJPEAPEAUIStreamGroupProxy@@@Z @ 0x18001FB50
 * Callers:
 *     ?GetStreamGroup@CVADServer@@UEAAJPEAPEAUIStreamGroupProxy@@@Z @ 0x180001B10 (-GetStreamGroup@CVADServer@@UEAAJPEAPEAUIStreamGroupProxy@@@Z.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CAudioStream::GetStreamGroup(CAudioStream *this, struct IStreamGroupProxy **a2)
{
  struct IStreamGroupProxy *v2; // rdi

  v2 = (struct IStreamGroupProxy *)*((_QWORD *)this + 6);
  *a2 = v2;
  (*(void (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v2 + 8LL))(v2);
  return 0LL;
}
