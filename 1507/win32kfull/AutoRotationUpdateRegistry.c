/*
 * XREFs of AutoRotationUpdateRegistry @ 0x1C012DBC0
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C012D870 (xxxRemoteDisconnect.c)
 *     xxxSetAutoRotationState @ 0x1C01D0D30 (xxxSetAutoRotationState.c)
 * Callees:
 *     ?UpdateAutoRotationRegistrySetting@@YAJKPEBGK0@Z @ 0x1C012DC04 (-UpdateAutoRotationRegistrySetting@@YAJKPEBGK0@Z.c)
 */

int AutoRotationUpdateRegistry()
{
  UpdateAutoRotationRegistrySetting(
    gAutoRotationInfo,
    L"LastAutoRequest",
    1u,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation\\NonPreserve");
  return UpdateAutoRotationRegistrySetting(
           dword_1C0323034,
           L"LastOrientation",
           0,
           L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
}
