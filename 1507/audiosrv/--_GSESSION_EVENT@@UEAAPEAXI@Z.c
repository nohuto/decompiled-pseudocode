/*
 * XREFs of ??_GSESSION_EVENT@@UEAAPEAXI@Z @ 0x18002BBF0
 * Callers:
 *     ?PostSessionEvent@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x18002BAFC (-PostSessionEvent@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ??1SESSION_EVENT@@UEAA@XZ @ 0x18002BC28 (--1SESSION_EVENT@@UEAA@XZ.c)
 */

SESSION_EVENT *__fastcall SESSION_EVENT::`scalar deleting destructor'(SESSION_EVENT *this, char a2)
{
  SESSION_EVENT::~SESSION_EVENT(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
